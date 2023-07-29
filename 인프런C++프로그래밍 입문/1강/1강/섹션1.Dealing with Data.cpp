# include <iostream> // ��ó�� ������
# include <climits> //climits ���̺귯�� 
# define PIE 3.1415926535// C���� ��������ϴ� ���

using namespace std;
// ; �������� ��Ȱ�� �Ѵ�.


//c++���� �Լ��� ����Ϸ��� �ݵ�� �� �Լ��� ������ �̸� �����ؾ� �Ѵ�.

int main() {
	// c++ �ڵ忡�� �ݵ�� main�� �̸��� ������ �ִ� �Լ��� �־�� �Ѵ�.
	// ����ȯ�� Ȯ���� ���� Hello World ����ϱ�
	cout << "Hello, World!" << endl;


		// ���� ����� ��Ģ
		// 1. ���� : ���Ҽ� �ִ¼�
		/*
		1. ������ �ڷ���
		2. ������ �̸�
		3. ������ ��� ����Ǵ°�(�޸� ����)?
		*/

		int a; // ����
		a = 7; // ����

		int b = 3; // �ʱ�ȭ(����� ���ÿ� ����)


		// ������ ���Ǳ� ������ ���ǵǾ�� �Ѵ�.
		cout << "a = " << &a << ", b = " << &b << endl;

		/*
		���� ��Ģ
			1. ���ڷ� �����Ҽ� ����
			2. c++���� ����ϰ� �ִ� Ű����� ����� �� ����
			3. white space�� ����Ҽ� ����(����)
			int 77aaa;
		int return;
		int aa aaa;
		*/

	

	// ������ : �Ҽ��ΰ� ���� ��
	// ���� ����, 0 , ��������
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int��" << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�̹���Ʈ�� �ִ밪��" << n_int << "�̴�." << endl;

	cout << "short" << sizeof n_short << "����Ʈ�̴�." << endl;
	cout << "�̹���Ʈ�� �ִ밪��" << n_short << "�̴�." << endl;

	cout << "long��" << sizeof n_long << "����Ʈ�̴�." << endl;
	cout << "�̹���Ʈ�� �ִ밪��" << n_long << "����Ʈ�̴�." << endl;

	cout << "long long��" << sizeof n_llong << "����Ʈ�̴�." << endl;
	cout << "�̹���Ʈ�� �ִ밪��" << n_llong << "����Ʈ�̴�." << endl;


	// unsigned �����ϸ� ���� ���� ������ �ʿ䰡 ��� �������� �����Ҽ� �ִ� �ִ밪�� �ø��� �ִ�.
	//unsigned int A;
	//unsigned short B;
	//unsigned long C;
	//unsigned long long D;

	// �Ǽ��� : �Ҽ��ΰ� �ִ� ��

	float A = 3.14;
	int B = 3.14;

	cout << A << " " << B << endl;




	//char : ���� �������� ǥ���Ҷ� ( �ƽ�Ű�ڵ�� ǥ���Ҽ� �ִ� ����ü�迡�� �� �ܾ ǥ����)
	int a1 = 77;
	char b1 = a1;
	cout << b1 << endl;

	char c = 'a'; // ''�� ǥ���Ϸ��� ���ڸ� ����
	cout << c << endl;

	// null ���� '\0' 
	char e[] = { 'a', 'b', 'c', '\0' };
	cout << e << endl;
	// "" ���� ��������� null ���ڰ� ���ԵǾ� ���� 
	// char�� �������� �Ѱ����� ������ �����Ҽ� �����Ƿ� ""�� ������

	// bool : 0 Ȥ�� 1�� ��Ÿ���� ���� (��������� 0=false, 1=true ���)
	bool x = 0;
	bool y = 1;
	bool z = 10;

	cout << x << " " << y << " " << z << endl;



	//-------------------------------------------------------------------------------------------------------------
	// const �����ڿ� �������� ��ȯ
	// ���� ���̸� ���ϴ� ���α׷�
	// ������ * ������ * ����

	const float PIE1 = 3.14156295; // const����ؼ� ��� ����, ���������� ������

	int r = 3;
	float s = r * r * PIE;
	float s1 = r * r * PIE1;

	// 1. �ٲ��ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� �� 

	int r2 = 3;
	float s2 = r2 * r2 * 3.14;

	cout << s << endl;
	cout << s1 << endl;



	// �������� ��ȯ ( C++�� ���������� ǳ���ؼ� ������)
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� ���������� 
	2. ���Ŀ� ���������� ȥ���Ͽ� ���������
	3. �Լ��� �Ű������� ������ ��
	*/

	int a2 = 3.141592;
	cout << a2 << endl; // int�� �Ǽ����̱� ������ 3�� ���

	//���������� �������� ��ȯ�ϱ�
	//typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	// C++
	//static_cast<typeName>
	cout << static_cast<int>(ch) << endl;

	// C++���������,  auto

	// + - * / %

	int a4 = 3 + 2;
	cout << a4 << endl;
	/*
	+ : �� ���� �ǿ������� ���� ���
	- : ù ��° �ǿ����ڿ��� �� ��° �ǿ������� ���� ���
    * : �� ���� �ǿ������� ���� ���
	/ : ù ��° �ǿ����ڿ��� �� ��° �ǿ����ڸ� ������
	>> �ΰ��� �ǿ����ڰ� ��� �����̸� ������� '��' �̴�.
	% : ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� ������ ������ ���� 
	���� �� 19�� 6���� ������ ���� 1�̴�.
	�ε� �Ҽ���(�Ǽ�) ����� �� ����.
	*/
	int aa = 10;
	int bb = 3;


	int cc = aa + bb;
	int dd = aa - bb;
	int ee = aa * bb;
	int ff = aa / bb;
	int gg = aa % bb;

	cout << "cc : " << cc << endl;
	cout << "dd : " << dd << endl;
	cout << "ee : " << ee << endl;
	cout << "ff : " << ff << endl;
	cout << "gg : " << gg << endl;

	// C++�� ������ ��� ������ ������ �� ������ 

	int multiple = aa + bb * cc;

	cout << multiple << endl;

	int multiple1 = aa / bb * cc;
	
	cout << multiple1 << endl;
	
	// auto �����Ҷ� ������ �Է��ϴ� �ʱ�ȭ�� ����Ҷ� ���������� auto�� ����ϸ� c++�� �ڵ����� ���������� ������

	auto n = 100; // n�� int
	auto x1 = 1.5; // x1�� float
	auto y1 = 13.e12L; // y1�� long long

	// ����ڰ� 3���� float�� ������ �����ϰ� ������
	auto x2 = 0.0; // float
	float y2 = 0; // float
	auto z2 = 0; // int
	// auto�� ������ �������� �ٷ궧 ���

	return 0;
}



