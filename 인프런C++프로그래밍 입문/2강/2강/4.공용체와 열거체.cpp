#include <iostream>

using namespace std;

// 1. 공용체(union)
// 2. 열거체(enum)

int main_4() {
	// 공용체(union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

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

	// 열거체(enum)
	// 기호 상수를 만드는 것에 대한 또다른 방법

	// 열거자는 정수로만 초기화 가능, 초기화 되지 않은 열거자는 앞의 열거자의 +1
	enum spectrum { red = 0, orange = 2, yellow, green, blue, violet, indigo, ultraviolet };
	/*
	1. spectrum을 새로운 데이터형 이름으로 만든다.
	2. red, orange, yellow.. 등등 다양한 수를 0에서 부터 7까지 정수값을 가각 나타내는 기호 상수로 만든다.
	*/

	// 열거자들간의 산술연산은 불가
	spectrum a = orange;
	cout << a << endl;

	// int형 변수에 열거자들 대입시 int형으로 저장됨
	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}