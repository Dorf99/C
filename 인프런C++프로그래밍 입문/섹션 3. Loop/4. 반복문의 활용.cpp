// 1. 배열기반 반복문
// 2. 2차원 배열과 중첩 반복문
#include <iostream>

using namespace std;

int main()
{
	// 배열 기반 반복문
	int a[10] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) {	// 출력하고 싶은 배열의 데이터 형과 같은 데이터형을 가진 카운터를 선언하고 : 다음 배열의 이름을 기입
		cout << i;		// 배열의 크기보다 적은수가 초기화되면 0으로 초기화된 나머지 값도 출력됨
	}

	// 중첩 루프 : 2차원 배열에서 많이 활용됨
	int temp[4][5] =
	{
		{1, 2, 3, 4, 5},
		{11, 22, 33, 44, 55},
		{111, 222, 333, 444, 555},
		{1111, 2222, 3333, 4444, 5555},
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	return 0;
}