// 1. while ��
// 2. do while ��
#include <iostream>

using namespace std;

int main_3()
{
	// while��, do while��

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
		cout << "for�� �Դϴ�.\n";
	}

	int j = 0;
	while (j < 3) {
		cout << "while�� �Դϴ�\n";
		j++;
	}

	cout << i << endl;
	cout << j << endl;

	bool j1 = false;
	do {
		cout << "do while�� �Դϴ�.\n";
	} while (j1);			// do while ���� �ݺ��� 1ȸ �����ϰ� ������ �˻��ؼ� true�̸� ����


	return 0;
}