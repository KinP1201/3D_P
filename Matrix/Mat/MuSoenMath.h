#pragma once

#define PI 3.1415926 //원주율 적당히 끊어서 정의

typedef struct mat3 {   // 2차원 행렬 구현된 자료구조
    float mat[3][3]{ {}, {}, {} };

    mat3(float m[3][3]) //행렬값 초기화
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) mat[i][j] = m[i][j];
        }
    }

    mat3 operator*(mat3 & aa) { // 행렬 곱하기 오버로딩
        mat3 matR(new float[3][3]{ { 1,0,0 }, { 0, 1, 0 }, { 0, 0, 1 } });
        // 행렬의 곱 결과를 받는 변수
        for (int i = 0; i < 3; i++) {       
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++)
                    matR.mat[i][j] += mat[i][k] * aa.mat[k][j];
            }
        }
        return matR;    // 행렬의 곱 결과 반환
    }
};

typedef struct vec3 {   // 2차원 좌표 + 동차좌표 구현된 자료구조
    float vec[3]{};

    vec3(float v[3])    //좌표값 초기화
    {
        for (int i = 0; i < 3; i++) vec[i] = v[i] ;
    }

    vec3 operator*(mat3 & aa) { // 좌표와 행렬의 곱 오버로딩
        vec3 vecR(new float[3]{ 0, 0, 0 });
        // 행렬의 곱 결과를 받는 변수
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++)
                vecR.vec[i] += vec[j]* aa.mat[j][i];
        }
        return vecR;    // 행렬의 곱 결과 반환
    }
};
