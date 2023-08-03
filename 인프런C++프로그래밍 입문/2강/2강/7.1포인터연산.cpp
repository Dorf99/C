#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define SIZE 20


// 1. 포인터와 배열/문자열
// 2. 포인터와 구조체

int main_7_1() 
{
	using namespace std;
	
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];	// strlen() : 변수의 크기를 반환하는 함수 
	strcpy(ps, animal);					// strcpy(a,b) : b를 a에 복사하는 함수

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다. " << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << "입니다. " << endl;

	return 0;
}