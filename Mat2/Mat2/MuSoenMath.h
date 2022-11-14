#pragma once

#define PI 3.1415926

typedef struct mat3 {
    float mat[3][3];
    float transpose[3][3];

    mat3(float m[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) mat[i][j] = m[i][j];
        }
    }

    mat3() { identity; }

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

    mat3 operator*(mat3& aa) {
        mat3 matR(new float[3][3]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++)
                    matR.mat[i][j] += mat[i][k] * aa.mat[k][j];
            }
        }
        return matR;
    }

    mat3 operator*(float aa) {
        mat3 matR(new float[3][3]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matR.mat[i][j] = mat[i][j] * aa;
            }
        }
        return matR;
    }

    mat3 operator/(float aa) {
        mat3 matR(new float[3][3]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matR.mat[i][j] = mat[i][j] / aa;
            }
        }
        return matR;
    }

    mat3 operator+(float aa) {
        mat3 matR(new float[3][3]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matR.mat[i][j] = mat[i][j] + aa;
            }
        }
        return matR;
    }

    mat3 operator-(float aa) {
        mat3 matR(new float[3][3]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matR.mat[i][j] = mat[i][j] - aa;
            }
        }
        return matR;
    }
};

typedef struct mat4 {
    float mat[4][4];
    float transpose[4][4];

    mat4(float m[4][4]) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) mat[i][j] = m[i][j];
        }
    }

    mat4() { identity; }

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

    mat4 operator*(mat4& aa) {
        mat4 matR(new float[4][4]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++)
                    matR.mat[i][j] += mat[i][k] * aa.mat[k][j];
            }
        }
        return matR;
    }

    mat4 operator*(float aa) {
        mat4 matR(new float[4][4]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matR.mat[i][j] = mat[i][j] * aa;
            }
        }
        return matR;
    }

    mat4 operator/(float aa) {
        mat4 matR(new float[4][4]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matR.mat[i][j] = mat[i][j] / aa;
            }
        }
        return matR;
    }

    mat4 operator+(float aa) {
        mat4 matR(new float[4][4]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matR.mat[i][j] = mat[i][j] + aa;
            }
        }
        return matR;
    }

    mat4 operator-(float aa) {
        mat4 matR(new float[4][4]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matR.mat[i][j] = mat[i][j] - aa;
            }
        }
        return matR;
    }
};

typedef struct vec3 {
    float vec[3][1];
    float transpose[1][3];

    vec3(float v[3][1]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++) vec[i][j] = v[i][j];
        }
    }

    vec3() { identity; }

    vec3 identity() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++)
                vec[i][j] = 0;
        }
    }

    vec3 transpose() {
        for (int i = 0; i < 1; i++)
            for (int j = 0; j < 3; j++) transpose[i][j] = vec[j][i];
    }

    vec3 operator*(mat3& aa) {
        vec3 vecR(new float[3][1]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++)
                vecR.vec[i][j] += vec[i][j] * aa.mat[j][i];
        }
        return vecR;
    }

    vec3 operator*(float aa) {
        vec3 vecR(new float[3][1]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] * aa;
            }
        }
        return vecR;
    }

    vec3 operator/(float aa) {
        vec3 vecR(new float[3][1]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] / aa;
            }
        }
        return vecR;
    }

    vec3 operator+(float aa) {
        vec3 vecR(new float[3][1]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] + aa;
            }
        }
        return vecR;
    }

    vec3 operator-(float aa) {
        vec3 vecR(new float[3][1]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] - aa;
            }
        }
        return vecR;
    }
};

typedef struct vec1x3 {
    float vec[1][3];
    float transpose[3][1];

    vec1x3(float v[1][3]) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++) vec[i][j] = v[i][j];
        }
    }

    vec1x3() { identity; }

    vec1x3 identity() {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++)
                vec[i][j] = 0;
        }
    }

    vec1x3 transpose() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 1; j++) transpose[i][j] = vec[j][i];
    }

    vec1x3 operator*(mat3& aa) {
        vec1x3 vecR(new float[1][3]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++)
                vecR.vec[i][j] += vec[i][j] * aa.mat[j][i];
        }
        return vecR;
    }

    vec1x3 operator*(float aa) {
        vec1x3 vecR(new float[1][3]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++) {
                vecR.vec[i][j] = vec[i][j] * aa;
            }
        }
        return vecR;
    }

    vec1x3 operator/(float aa) {
        vec1x3 vecR(new float[1][3]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++) {
                vecR.vec[i][j] = vec[i][j] / aa;
            }
        }
        return vecR;
    }

    vec1x3 operator+(float aa) {
        vec1x3 vecR(new float[1][3]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++) {
                vecR.vec[i][j] = vec[i][j] + aa;
            }
        }
        return vecR;
    }

    vec1x3 operator-(float aa) {
        vec1x3 vecR(new float[1][3]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 3; j++) {
                vecR.vec[i][j] = vec[i][j] - aa;
            }
        }
        return vecR;
    }
};

typedef struct vec4 {
    float vec[4][1];
    float transpose[1][4];

    vec4(float v[4][1]) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++) vec[i][j] = v[i][j];
        }
    }

    vec4() { identity; }

    vec4 identity() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++)
                vec[i][j] = 0;
        }
    }

    vec4 transpose() {
        for (int i = 0; i < 1; i++)
            for (int j = 0; j < 4; j++) transpose[i][j] = vec[j][i];
    }

    vec4 operator*(mat3& aa) {
        vec4 vecR(new float[4][1]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++)
                vecR.vec[i][j] += vec[i][j] * aa.mat[j][i];
        }
        return vecR;
    }

    vec4 operator*(float aa) {
        vec4 vecR(new float[4][1]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] * aa;
            }
        }
        return vecR;
    }

    vec4 operator/(float aa) {
        vec4 vecR(new float[4][1]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] / aa;
            }
        }
        return vecR;
    }

    vec4 operator+(float aa) {
        vec4 vecR(new float[4][1]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] + aa;
            }
        }
        return vecR;
    }

    vec4 operator-(float aa) {
        vec4 vecR(new float[4][1]);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 1; j++) {
                vecR.vec[i][j] = vec[i][j] - aa;
            }
        }
        return vecR;
    }
};

typedef struct vec1x4 {
    float vec[1][4];
    float transpose[4][1];

    vec1x4(float v[1][4]) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++) vec[i][j] = v[i][j];
        }
    }

    vec1x4() { identity; }

    vec1x4 identity() {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++)
                vec[i][j] = 0;
        }
    }

    vec1x4 transpose() {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 1; j++) transpose[i][j] = vec[j][i];
    }

    vec1x4 operator*(mat3& aa) {
        vec1x4 vecR(new float[1][4]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++)
                vecR.vec[i][j] += vec[i][j] * aa.mat[j][i];
        }
        return vecR;
    }

    vec1x4 operator*(float aa) {
        vec1x4 vecR(new float[1][4]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++) {
                vecR.vec[i][j] = vec[i][j] * aa;
            }
        }
        return vecR;
    }

    vec1x4 operator/(float aa) {
        vec1x4 vecR(new float[1][4]);
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++) {
                vecR.vec[i][j] = vec[i][j] / aa;
            }
        }
        return vecR;
    }

    vec1x4 operator+(float aa) {
        vec1x4 vecR;
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++) {
                vecR.vec[i][j] = vec[i][j] + aa;
            }
        }
        return vecR;
    }

    vec1x4 operator-(float aa) {
        vec1x4 vecR;
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 4; j++) {
                vecR.vec[i][j] = vec[i][j] - aa;
            }
        }
        return vecR;
    }
};

