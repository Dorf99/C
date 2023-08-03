#include <iostream>

using namespace std;

// 1. ����ü(union)
// 2. ����ü(enum)

int main_4() {
	// ����ü(union)
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	std::cout << test.intVal << std::endl;
	test.longVal = 33;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;
	test.floatVal = 3.3;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;
	std::cout << test.floatVal << std::endl;

	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	// �����ڴ� �����θ� �ʱ�ȭ ����, �ʱ�ȭ ���� ���� �����ڴ� ���� �������� +1
	enum spectrum { red = 0, orange = 2, yellow, green, blue, violet, indigo, ultraviolet };
	/*
	1. spectrum�� ���ο� �������� �̸����� �����.
	2. red, orange, yellow.. ��� �پ��� ���� 0���� ���� 7���� �������� ���� ��Ÿ���� ��ȣ ����� �����.
	*/

	// �����ڵ鰣�� ��������� �Ұ�
	spectrum a = orange;
	cout << a << endl;

	// int�� ������ �����ڵ� ���Խ� int������ �����
	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}