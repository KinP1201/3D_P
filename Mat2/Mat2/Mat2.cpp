#include "iostream"         //입출력 라이브러리
#include "math.h"			//삼각함수 사용을 위한 라이브러리
#include "MuSoenMath.h"		//자료를 만들어 놓은 헤더파일 

int main() {

	mat3 m3(new float[3][3]{ {1,0,0}, {0,1,0}, {0,0,1} });

	mat4 m4(new float[4][4]{ {1,0,0,0}, {0,1,0,0}, {0,0,1,0}, {0,0,0,1 } });

	vec3 v3(new float[3][1]{ 1,1,1,});

	vec1x3 vx3(new float[1][3]{ {1}, {1}, {1} });

	vec4 v4(new float[4][1] {1,1,1,1});

	vec1x4 vx4(new float[1][4]{ {1}, {1}, {1}, {1} });

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << m3.mat[i][j] << " ";
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << m4.mat[i][j] << " ";
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			std::cout << v3.vec[i][j] << " ";
		}
	}

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << vx3.vec[i][j] << " \n";
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 1; j++) {
			std::cout << v4.vec[i][j] << " ";
		}
	}

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << vx4.vec[i][j] << " \n";
		}
	}
}