// 1. �ݺ����̶�?
// 2. for ����
#include <iostream>

using namespace std;

int main()
{
	// �ݺ����̶�?
	char a[10] = { 'a' , 'b', 'c', 'd', 'e' };

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;

	// for���� �⺻���� ����
	for (int i = 0; i < 5; i++) {
		cout << i << "��°�Դϴ�." << endl;
	}
	/* �ݺ��� ��Ģ
	1. �ݺ����� ����� ī������ ���� �ʱ�ȭ�Ѵ�.
	2. �ݺ����� ������ ������ '���� �˻�'�Ѵ�.
	3. �ݺ��� ��ü�� �����Ѵ�.
	4. ī������ ���� ��ȭ�Ѵ�.
	*/
	return 0;
}
