// 1. while 문
// 2. do while 문
#include <iostream>

using namespace std;

int main_3()
{
	// while문, do while문

	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}

	bool a = true;
	bool b = false;
	while (b) {
		cout << "hello\n";
	}

	for (int i = 0; i < 3; i++) {	
		cout << "for문 입니다.\n";
	}

	int j = 0;
	while (j < 3) {
		cout << "while문 입니다\n";
		j++;
	}

	cout << i << endl;
	cout << j << endl;

	bool j1 = false;
	do {
		cout << "do while문 입니다.\n";
	} while (j1);			// do while 문은 반복을 1회 실행하고 조건을 검색해서 true이면 실행


	return 0;
}