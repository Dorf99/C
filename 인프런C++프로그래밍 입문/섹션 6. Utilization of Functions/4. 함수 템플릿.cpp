// 1. �Ϲ�ȭ ���α׷���
// 2. ���ø�
// 3. ���ø��� �����ε�
#include <iostream>

using namespace std;

// class Ȥ�� typeName
template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main() {
	// �Լ� ���ø� : �Լ��� �Ϲ�ȭ�� ���� ����
	// ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
	int a = 3;
	int b = 4;
	/*cout << sum(a, b) << endl;*/

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;

	return 0;
}

template<class Any>
Any sum(Any a, Any b) {
	return a + b;
}

template <class Any>
Any sum(int a, Any b) {
	return a + b;
}