#include "iostream"         //입출력 라이브러리
#include "math.h"			//삼각함수 사용을 위한 라이브러리
#include "MuSoenMath.h"		//자료를 만들어 놓은 헤더파일 

int main() {
	vec3 v(new float[3]{ 3, 3, 1 }); // 시작 좌표 설정

	mat3 Translate(new float[3][3]{ { 1,0,0 }, {0, 1, 0}, {3, 5, 1} });
	// 좌표를 x로 3 , y로 5만큼 이동하는 이동행렬
	mat3 Rotate(new float[3][3]{ {(float)cos(PI / 6) , -(float)sin(PI / 6) , 0}, {(float)sin(PI / 6), (float)cos(PI / 6), 0}, {0, 0, 1} });
	// 30도 = PI/6, 30도 회전행렬
	mat3 Scale(new float[3][3]{ { 2,0,0 }, {0, 2, 0}, {0, 0, 1} });
	// 크기를 두배로 늘려주는 행렬

	vec3 p(new float[3] { 0, 0, 0 }); //결과 좌표 초기화

	p = v * Translate * Rotate * Scale; // 좌표이동 -> 30도 회전 -> 2배 확대

	for (int i = 0; i < 3; i++) {		//결과 좌표 출력
		std::cout << p.vec[i];
		if (i < 2) std::cout << ", ";
	}
}