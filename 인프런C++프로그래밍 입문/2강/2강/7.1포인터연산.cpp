#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define SIZE 20


// 1. �����Ϳ� �迭/���ڿ�
// 2. �����Ϳ� ����ü

int main_7_1() 
{
	using namespace std;
	
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];	// strlen() : ������ ũ�⸦ ��ȯ�ϴ� �Լ� 
	strcpy(ps, animal);					// strcpy(a,b) : b�� a�� �����ϴ� �Լ�

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�" << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�. " << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << "�Դϴ�. " << endl;

	return 0;
}