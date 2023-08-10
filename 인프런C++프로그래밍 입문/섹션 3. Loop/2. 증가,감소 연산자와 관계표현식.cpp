// 1. 증가연산자/감소연산자
// 2. 관계표현식
#include <iostream>
using namespace std;

int main_2()
{
	// 증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << "a는 " << a << " , b는 " << b << endl;
	cout << "a++는 " << a++ << endl;				// 10출력
	cout << "++b는" << ++b << endl;					// 11출력
	cout << "a는 " << a << " , b는 " << b << endl;	// 둘다 11출력

	for (int i = 5; i > 0; i--) {
		cout << i << "번째입니다. " << endl;
		}
	/*
	관계표현식
	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지 않다
	*/

	return 0;
}