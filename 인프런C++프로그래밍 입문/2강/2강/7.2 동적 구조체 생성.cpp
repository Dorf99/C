// ���� ����ü ����
// temp* ps = new temp;
// new �����ڸ� ���� �������� ������ ����ü���� �ɹ������� ��� ���

#include <iostream>

struct MyStruct
{
	char name[20];
	int age;
};
/* MyStruct ����ü �ȿ� char name[20], int age ��¸�� 2��*/

int main_7_2()
{
	using namespace std;

	MyStruct* temp = new MyStruct;				// ����ü�� new �����ڸ� ���� �������� ����

	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;							// . ��ſ� -> ��������ڸ� ���� ����ü�� name �ɹ��� ����

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;							// ()�� ���� ����ü�� �����̸��� ����*�� ���̸� . �ɹ������ڷε� ���ٰ���

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << temp->age << "�� �̱���!";
	
	return 0;
}