#include <iostream>

int main_6_1() 
{
	
	using namespace std;

	double* p3 = new double[3];		// double형 데이터 3개를 저장할 수 있는 공간을 대입한다.
	p3[0] = 0.2;					// p3를 배열 이름처럼 취급한다.
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;					// 포인터를 증가시킨다.

	cout << "Now p3[0] is " << p3[0] << " and ";

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;					// 다시 시작 위치를 지시한다.
	delete[] p3;					// 배열 메모리를 해제한다.
	// cin.get();
	return 0;
}