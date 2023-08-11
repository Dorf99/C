// 1. 값으로 전달하기
// - 매개변수(parameter)
// - 전달인자(argument)
#include <iostream>

using namespace std;

void helloCPP(int, int);

int main_2()
{

	int times, times2;
	cout << "정수를 입력하십시오.\n";
	cin >> times;
	cout << "정수를 한번 더 입력하십시오.\n";
	cin >> times2;
	helloCPP(times, times2); // - 전달인자(argument)
	return 0;
}

void helloCPP(int n, int m) { // - 매개변수(parameter)
	for (int i = 0; i < n; i++)
		cout << "Hello\n";
	for (int i = 0; i < m; i++)
		cout << "C++!\n";
}

/* 
parameter 와 argument의 데이터형만 일치하면 된다.
parameter는 , 로 여러개 사용가능하다.
*/