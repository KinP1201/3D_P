#include "iostream"         //����� ���̺귯��
#include "math.h"			//�ﰢ�Լ� ����� ���� ���̺귯��
#include "MuSoenMath.h"		//�ڷḦ ����� ���� ������� 

int main() {
	vec3 v(new float[3]{ 3, 3, 1 }); // ���� ��ǥ ����

	mat3 Translate(new float[3][3]{ { 1,0,0 }, {0, 1, 0}, {3, 5, 1} });
	// ��ǥ�� x�� 3 , y�� 5��ŭ �̵��ϴ� �̵����
	mat3 Rotate(new float[3][3]{ {(float)cos(PI / 6) , -(float)sin(PI / 6) , 0}, {(float)sin(PI / 6), (float)cos(PI / 6), 0}, {0, 0, 1} });
	// 30�� = PI/6, 30�� ȸ�����
	mat3 Scale(new float[3][3]{ { 2,0,0 }, {0, 2, 0}, {0, 0, 1} });
	// ũ�⸦ �ι�� �÷��ִ� ���

	vec3 p(new float[3] { 0, 0, 0 }); //��� ��ǥ �ʱ�ȭ

	p = v * Translate * Rotate * Scale; // ��ǥ�̵� -> 30�� ȸ�� -> 2�� Ȯ��

	for (int i = 0; i < 3; i++) {		//��� ��ǥ ���
		std::cout << p.vec[i];
		if (i < 2) std::cout << ", ";
	}
}