// 1. ����������/���ҿ�����
// 2. ����ǥ����
#include <iostream>
using namespace std;

int main_2()
{
	// ���� ������, ���� ������
	int a = 10;
	int b = 10;

	cout << "a�� " << a << " , b�� " << b << endl;
	cout << "a++�� " << a++ << endl;				// 10���
	cout << "++b��" << ++b << endl;					// 11���
	cout << "a�� " << a << " , b�� " << b << endl;	// �Ѵ� 11���

	for (int i = 5; i > 0; i--) {
		cout << i << "��°�Դϴ�. " << endl;
		}
	/*
	����ǥ����
	< : �۴�
	<= : �۰ų� ����
	> : ũ��
	>= : ũ�ų� ����
	== : ����
	!= : ���� �ʴ�
	*/

	return 0;
}