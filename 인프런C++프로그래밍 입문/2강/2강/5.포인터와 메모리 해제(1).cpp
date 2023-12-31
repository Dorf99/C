#include <iostream>

using namespace std;

// 1. 포인터란 무엇인가?
// 2. 객체지향 프로그래밍에서 포인터가 필요한 이유
// 3. 포인터의 선언

int main_5() {
	// 변수 선언 과정

	int val = 3;

	cout << &val << endl;

	// C++ : 객체지향 프로그래밍
	/*
	컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴수 있다.
	- 배열을 하나 생성하고자 한다
	재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정되어야 사용가능
	객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정가능
	*/

	// 포인터 : 사용할 주소에 이름을 붙인다.
	// 즉 , 포인터는 포인터의 이름이 주소를 나타낸다.
	// 간접값 연산자, 간접 참조 연산자 *

	//int *a; // c style
	//int* b; // c++ style
	//int* c, d; // c는 포인터 변수, d는 int형 변수

	int a = 6;
	int* b;

	b = &a;
	cout << "a의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;

	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소" << b << endl;

	*b = *b + 1;

	cout << "이제 a의 값은 " << a << endl;






	return 0;
}