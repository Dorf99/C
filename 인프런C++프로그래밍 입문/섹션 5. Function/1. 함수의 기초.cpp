// 1. �Լ���?
// 2. �Լ� ��� ��Ģ
// 3. ���ϰ��� �ִ� �Լ� / ���� �Լ�
#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);		// �Լ��� ���� ���
float circle(int x);

	/*
	C++ ���� �Լ��� ����ϱ� ���� ����Ǿ�� �ϴ� 3���� �۾�
	1. �Լ� ���� ����
	2. �Լ� ���� ����
	3. �Լ� ȣ��

	C++ ���� �Լ��� 2���� ���·� ������.
	1. ���ϰ��� �ִ� Ÿ��

	typeName function Name(parameterList)		
	{	
		statement(s);
		return value;				// typeName�� ���� Ÿ���̿��� ��		
	}

	2. ���ϰ��� ���� Ÿ��

	void functionName(parameterList)
	{
		statement(s);
		return;  // ������ �� ����
	}

	(���ϰ� : ȣ���� �Լ����� �ǵ��� �ִ� ��, ���Ϻκ��� ��������� �Լ��� ���� ��Ÿ����.)

	�Լ� : �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����
	ȣ���� �Լ����� ���� �ǵ��� �ִ�, return value�� �ִ� �Լ��� ���� �Լ��� �з�
	*/
int main_1()
{
	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." << endl;
	return 0;
}

void cheers(int n) {	// �Լ��� ���� ����
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
	//return;
}

float circle(int x) {
	return x * x * PIE;
}
