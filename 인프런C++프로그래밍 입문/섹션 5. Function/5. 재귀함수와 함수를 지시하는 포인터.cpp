// 1. ����Լ�
// 2. �Լ��� �����ϴ� ������
#include <iostream>	

using namespace std;

//void countDown(int);

//int main() {
//	// ���ȣ�� : C++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ִ�.
//
//	countDown(5);
//
//	return 0;
//}
//
//void countDown(int n) {
//	cout << "Counting..." << n << endl;
//	if (n > 0)
//		countDown(n - 1);
//	cout << n << "��° ����Լ�" << endl;
//}

int func(int);

int main() {
	// �Լ��� �����ϴ� ������
	// ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����� �� �ִ�.
	/*
	1. �Լ��� �ּҸ� ��´�.
	2. �Լ��� �����ϴ� �����͸� �����Ѵ�.
	3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ���Ѵ�.
	*/
	cout << func << endl;

	int (*pf)(int);
	pf = func;

	cout << (*pf)(3) << endl;


	return 0;
}

int func(int n) {
	return n + 1;
}