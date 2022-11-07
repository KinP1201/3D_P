#pragma once

#define PI 3.1415926 //������ ������ ��� ����

typedef struct mat3 {   // 2���� ��� ������ �ڷᱸ��
    float mat[3][3]{ {}, {}, {} };

    mat3(float m[3][3]) //��İ� �ʱ�ȭ
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) mat[i][j] = m[i][j];
        }
    }

    mat3 operator*(mat3 & aa) { // ��� ���ϱ� �����ε�
        mat3 matR(new float[3][3]{ { 1,0,0 }, { 0, 1, 0 }, { 0, 0, 1 } });
        // ����� �� ����� �޴� ����
        for (int i = 0; i < 3; i++) {       
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++)
                    matR.mat[i][j] += mat[i][k] * aa.mat[k][j];
            }
        }
        return matR;    // ����� �� ��� ��ȯ
    }
};

typedef struct vec3 {   // 2���� ��ǥ + ������ǥ ������ �ڷᱸ��
    float vec[3]{};

    vec3(float v[3])    //��ǥ�� �ʱ�ȭ
    {
        for (int i = 0; i < 3; i++) vec[i] = v[i] ;
    }

    vec3 operator*(mat3 & aa) { // ��ǥ�� ����� �� �����ε�
        vec3 vecR(new float[3]{ 0, 0, 0 });
        // ����� �� ����� �޴� ����
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++)
                vecR.vec[i] += vec[j]* aa.mat[j][i];
        }
        return vecR;    // ����� �� ��� ��ȯ
    }
};
