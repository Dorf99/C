// 1. switch 구문
// 2. break 구문
// 3. continue 구문
#include <iostream>

using namespace std;
const int SIZE = 30;
int main()
{
	//int a;
	//cin >> a;

	//switch (a)
	//{
	//case 1:
	//	cout << "입력하신 값은 1 입니다.\n";
	//	break;	// break : 모든 반복문에서 사용가능, 구문종료기능
	//case 2:
	//	cout << "입력하신 값은 2 입니다.\n";
	//	break;
	//case 3:
	//	cout << "입력하신 값은 3 입니다.\n";
	//	break;
	//default:
	//	cout << "입력하신 값은 1, 2, 3 이외의 다른 값입니다.\n";
	//	break;
	//}

	//cout << "switch 구문이 끝났습니다.\n";

	//int i = 0;
	//while (true)
	//{
	//	cout << "i의 값은 " << i << " 입니다." << endl;
	//	if (i > 10)
	//		break;
	//	i++;
	//}

	//cout << "while문이 끝났습니다.\n";


	
	cout << "문장을 입력하십시오.\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "입력하신 문장은\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ')
			continue;

		spaces++;
	}
	cout << "입니다\n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다.\n";
	cout << "for문이 끝났습니다.\n";



	return 0;
}