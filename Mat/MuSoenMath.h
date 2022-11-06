#pragma once

#define PI = 3.1415926 //������ ������ ��� ����
int i, j, k;

typedef struct mat3 { //2���� ���
    float mat[3][3];

    mat3(float m[3][3]) //��İ� �ʱ�ȭ
    {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) m[i][j] = mat[i][j];
        }
    }

    // ��� ���ϱ�
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

typedef struct vec3 { //2���� ��ǥ + ������ǥ
    float vec[3];

    vec3(float v[3]) //��ǥ�� �ʱ�ȭ
    {
        for ( i = 0; i < 3; i++) v[i] = vec[i];
    }

    // ��� ���ϱ�
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
