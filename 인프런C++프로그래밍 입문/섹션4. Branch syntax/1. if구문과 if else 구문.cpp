// 1. if 구문
// 2. if else 구문
#include <iostream>

using namespace std;

int main_1()
{
	// 분기 구문 : if구문 조건이 참이면 실행, 거짓이면 구문 무시
	if (false) {
		cout << "#1";
	}
	else if (true) {
		cout << "#2" << endl;
	}
	else {
		cout << "#1";
	}

		
	if (false)
		cout << "조건이 거짓입니다.";

	cout << "프로그램이 종료되었습니다.";


	return 0;
}