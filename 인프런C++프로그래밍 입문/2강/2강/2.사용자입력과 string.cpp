#include <iostream>
#include <cstring> // strlen() �Լ��� ����ϱ� ���ؼ�

using namespace std;

const int Size = 15;
char name1[Size];						// ����ִ� �迭
char name2[Size] = "C++programing";		// ���ڿ� ����� �ʱ�ȭ�� �迭

int main_2a() {
	
	cout << "�ȳ��ϼ���! ����" << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���?\n";
	//cin >> name1;						// cin ����ڰ� �Է��� ���� >> �� �����ϴ� �Լ�, cin�� ������ ������ ���ڿ��� ������ �ν���
	cin.getline(name1, Size);			// getling ������ �����Ͽ� �Է°���
	cout << "��," << name1 << "��, ����� �̸���";
	cout << strlen(name1) << "�� �Դϴٸ�\n";							// strlen() ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";	// sizeof() ������ ����Ʈ ũ�⸦ ��ȯ�ϴ� �Լ�
	cout << "�̸���" << name1[0] << "�ڷ� �����ϴ±���.\n";
	name2[3] = '\0';  // �迭�� 4��° ���ڿ� null �Է�
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;

	return 0;
}


	/*
	C++ ���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷����� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.

	�迭�� �ٸ� �迭�� ��°�� ������ �� ����.
	>> string������ �̰��� �����ϴ�.
	*/

int main_2b() {
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; // Ʋ����
	str1 = str2; // �´�
	cout << str1[0] << endl;

	return 0;
}
	
