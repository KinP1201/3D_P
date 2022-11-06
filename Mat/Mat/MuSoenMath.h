#pragma once

#define PI = 3.1415926 //원주율 적당히 끊어서 정의
int i, j, k;

typedef struct mat3 { //2차원 행렬
    float mat[3][3];

    mat3(float m[3][3]) //행렬값 초기화
    {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) m[i][j] = mat[i][j];
        }
    }

    // 행렬 곱하기
    mat3{
        mat3 matR(new float[3][3]{ { 1,0,0 }, { 0, 1, 0 }, { 0, 0, 1 } });
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    mat[i][j] += mat[i][k] * mat[k][j];
            }
        }
        return matR;
    }
};

typedef struct vec3 { //2차원 좌표 + 동차좌표
    float vec[3];

    vec3(float v[3]) //좌표값 초기화
    {
        for ( i = 0; i < 3; i++) v[i] = vec[i];
    }

    // 행렬 곱하기
    vec3{
        vec3 vecR(new float[3]{ 0, 0, 0 });
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
                vec[i] += vec[j]* mat[i][j];
        }
        return vecR;
    }
};
