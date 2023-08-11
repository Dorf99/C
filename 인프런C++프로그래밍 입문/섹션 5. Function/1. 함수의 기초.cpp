// 1. 함수란?
// 2. 함수 사용 규칙
// 3. 리턴값이 있는 함수 / 없는 함수
#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);		// 함수의 원형 명시
float circle(int x);

	/*
	C++ 에서 함수를 사용하기 위해 선행되어야 하는 3가지 작업
	1. 함수 정의 제공
	2. 함수 원형 제공
	3. 함수 호출

	C++ 에서 함수는 2가지 형태로 나뉜다.
	1. 리턴값이 있는 타입

	typeName function Name(parameterList)		
	{	
		statement(s);
		return value;				// typeName과 같은 타입이여야 함		
	}

	2. 리턴값이 없는 타입

	void functionName(parameterList)
	{
		statement(s);
		return;  // 생략될 수 있음
	}

	(리턴값 : 호출한 함수에게 되돌려 주는 값, 리턴부분은 통상적으로 함수의 끝을 나타낸다.)

	함수 : 하나의 특별한 목적의 작업을 수행하기 위해 도립적으로 설계된 코드의 집합
	호출한 함수에게 값을 되돌려 주는, return value가 있는 함수와 없는 함수로 분류
	*/
int main_1()
{
	int a;
	cout << "하나의 수를 입력하십시오." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "원의 반지름 길이를 입력하십시오." << endl;
	cin >> b;
	float c = circle(b);
	cout << "원의 넓이는 " << c << " 입니다." << endl;
	return 0;
}

void cheers(int n) {	// 함수의 내용 정의
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
	//return;
}

float circle(int x) {
	return x * x * PIE;
}
