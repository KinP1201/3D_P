#pragma once

#define PI 3.1415926

typedef struct mat3{
	float mat[3][3];
    float transpose[3][3];

    mat3(float m[3][3]){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) mat[i][j] = m[i][j];
        }
    }

    mat3 identity() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == j) mat[i][j] = 1;
                else mat[i][j] = 0;
            }
        }
    }

    mat3 transpose() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) transpose[i][j] = mat[j][i];
    }

};

typedef struct mat4{
	float mat[4][4];
    float transpose[4][4];

    mat4(float m[4][4]){
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) mat[i][j] = m[i][j];
        }
    }

    mat4 identity() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i == j) mat[i][j] = 1;
                else mat[i][j] = 0;
            }
        }
    }

    mat4 transpose() {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) transpose[i][j] = mat[j][i];
    }
};

typedef struct vec3{
	float vec[3];
    float transpose[1][3];

    vec3(float v[3]){
        for (int i = 0; i < 3; i++) vec[i] = v[i];
    }

    vec3 identity() {
        for (int i = 0; i < 3; i++)  vec[i] = 0;
    }
};

typedef struct vec1x3{
	float vec[3];
    float transpose[1][3];

    vec1x3(float v[3]) {
        for (int i = 0; i < 3; i++) vec[i] = v[i];
    }

    vec3 identity() {
        for (int i = 0; i < 3; i++)  vec[i] = 0;
    }
};

typedef struct vec4{
	float vec[4];
    float transpose[1][4];

    vec4(float v[4]) {
        for (int i = 0; i < 4; i++) vec[i] = v[i];
    }

    vec3 identity() {
        for (int i = 0; i < 4; i++)  vec[i] = 0;
    }
};

typedef struct vec1x4{
    float vec[4];
    float transpose[1][4];

    vec1x4(float v[4]) {
        for (int i = 0; i < 4; i++) vec[i] = v[i];
    }

    vec3 identity() {
        for (int i = 0; i < 4; i++)  vec[i] = 0;
    }
};

