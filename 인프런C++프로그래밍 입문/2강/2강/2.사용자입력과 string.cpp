#include <iostream>
#include <cstring> // strlen() 함수를 사용하기 위해서

using namespace std;

const int Size = 15;
char name1[Size];						// 비어있는 배열
char name2[Size] = "C++programing";		// 문자열 상수로 초기화된 배열

int main_2a() {
	
	cout << "안녕하세요! 저는" << name2;
	cout << "입니다! 성함이 어떻게 되시나요?\n";
	//cin >> name1;						// cin 사용자가 입력한 것을 >> 에 저장하는 함수, cin은 공백을 만나면 문자열의 끝으로 인식함
	cin.getline(name1, Size);			// getling 공백을 포함하여 입력가능
	cout << "음," << name1 << "씨, 당신의 이름은";
	cout << strlen(name1) << "자 입니다만\n";							// strlen() 문자열의 길이를 반환하는 함수
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";	// sizeof() 변수의 바이트 크기를 반환하는 함수
	cout << "이름이" << name1[0] << "자로 시작하는군요.\n";
	name2[3] = '\0';  // 배열의 4번째 문자에 null 입력
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl;

	return 0;
}


	/*
	C++ 에서 문자열을 다루는 방법 중 하나인 string
	C스타일로 string 객체를 초기화할 수 있다.
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체를 디스플레이할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

	배열을 다른 배열에 통째로 대입할 수 없다.
	>> string에서는 이것이 가능하다.
	*/

int main_2b() {
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; // 틀리다
	str1 = str2; // 맞다
	cout << str1[0] << endl;

	return 0;
}
	
