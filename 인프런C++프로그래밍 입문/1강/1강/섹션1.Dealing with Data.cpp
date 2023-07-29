# include <iostream> // 전처리 지시자
# include <climits> //climits 라이브러리 
# define PIE 3.1415926535// C에서 상수선언하는 방식

using namespace std;
// ; 종결자의 역활을 한다.


//c++에서 함수를 사용하려면 반드시 그 함수의 원형을 미리 정의해야 한다.

int main() {
	// c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
	// 개발환경 확인을 위해 Hello World 출력하기
	cout << "Hello, World!" << endl;


		// 변수 선언과 규칙
		// 1. 변수 : 변할수 있는수
		/*
		1. 변수의 자료형
		2. 변수의 이름
		3. 변수가 어디에 저장되는가(메모리 영역)?
		*/

		int a; // 선언
		a = 7; // 대입

		int b = 3; // 초기화(선언과 동시에 대입)


		// 변수는 사용되기 이전에 정의되어야 한다.
		cout << "a = " << &a << ", b = " << &b << endl;

		/*
		변수 규칙
			1. 숫자로 시작할수 없다
			2. c++에서 사용하고 있는 키워드는 사용할 수 없다
			3. white space를 사용할수 없다(여백)
			int 77aaa;
		int return;
		int aa aaa;
		*/

	

	// 정수형 : 소수부가 없는 수
	// 음의 정수, 0 , 양의정수
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는" << sizeof n_int << "바이트이다." << endl;
	cout << "이바이트의 최대값은" << n_int << "이다." << endl;

	cout << "short" << sizeof n_short << "바이트이다." << endl;
	cout << "이바이트의 최대값은" << n_short << "이다." << endl;

	cout << "long는" << sizeof n_long << "바이트이다." << endl;
	cout << "이바이트의 최대값은" << n_long << "바이트이다." << endl;

	cout << "long long는" << sizeof n_llong << "바이트이다." << endl;
	cout << "이바이트의 최대값은" << n_llong << "바이트이다." << endl;


	// unsigned 선언하면 음의 값을 저장할 필요가 없어서 변수형이 저장할수 있는 최대값을 늘릴수 있다.
	//unsigned int A;
	//unsigned short B;
	//unsigned long C;
	//unsigned long long D;

	// 실수형 : 소수부가 있는 수

	float A = 3.14;
	int B = 3.14;

	cout << A << " " << B << endl;




	//char : 작은 문자형을 표현할때 ( 아스키코드로 표현할수 있는 문자체계에서 한 단어를 표현함)
	int a1 = 77;
	char b1 = a1;
	cout << b1 << endl;

	char c = 'a'; // ''로 표현하려는 문자를 감쌈
	cout << c << endl;

	// null 문자 '\0' 
	char e[] = { 'a', 'b', 'c', '\0' };
	cout << e << endl;
	// "" 에는 명시적으로 null 문자가 포함되어 있음 
	// char형 변수에는 한가지의 변수만 저장할수 있으므로 ""는 사용못함

	// bool : 0 혹은 1만 나타낼수 있음 (명시적으로 0=false, 1=true 사용)
	bool x = 0;
	bool y = 1;
	bool z = 10;

	cout << x << " " << y << " " << z << endl;



	//-------------------------------------------------------------------------------------------------------------
	// const 제한자와 데이터형 변환
	// 원의 넓이를 구하는 프로그램
	// 반지름 * 반지름 * 파이

	const float PIE1 = 3.14156295; // const사용해서 상수 선언, 변수형까지 선언함

	int r = 3;
	float s = r * r * PIE;
	float s1 = r * r * PIE1;

	// 1. 바뀔필요가 없는 수
	// 2. 바뀌어서는 안되는 수 

	int r2 = 3;
	float s2 = r2 * r2 * 3.14;

	cout << s << endl;
	cout << s1 << endl;



	// 데이터형 변환 ( C++은 데이터형이 풍부해서 골라야함)
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을때 
	2. 수식에 데이터형을 혼합하여 사용했을때
	3. 함수에 매개변수를 전달할 때
	*/

	int a2 = 3.141592;
	cout << a2 << endl; // int는 실수형이기 때문에 3만 출력

	//강제적으로 데이터형 변환하기
	//typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	// C++
	//static_cast<typeName>
	cout << static_cast<int>(ch) << endl;

	// C++산술연산자,  auto

	// + - * / %

	int a4 = 3 + 2;
	cout << a4 << endl;
	/*
	+ : 두 개의 피연산자의 합을 계산
	- : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산
    * : 두 개의 피연산자의 곱을 계산
	/ : 첫 번째 피연산자에서 두 번째 피연산자를 나눈다
	>> 두개의 피연산자가 모두 정수이면 결과값은 '몫' 이다.
	% : 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지 구함 
	예를 들어서 19를 6으로 나누면 값은 1이다.
	부동 소수점(실수) 사용할 수 없다.
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

	// C++가 복잡한 산술 연산을 수행할 수 있을까 

	int multiple = aa + bb * cc;

	cout << multiple << endl;

	int multiple1 = aa / bb * cc;
	
	cout << multiple1 << endl;
	
	// auto 선언할때 변수를 입력하는 초기화를 사용할때 데이터형을 auto로 명시하면 c++이 자동으로 데이터형을 결정함

	auto n = 100; // n은 int
	auto x1 = 1.5; // x1은 float
	auto y1 = 13.e12L; // y1은 long long

	// 사용자가 3개의 float형 변수를 설정하고 싶을때
	auto x2 = 0.0; // float
	float y2 = 0; // float
	auto z2 = 0; // int
	// auto는 복잡한 변수형을 다룰때 사용

	return 0;
}



