#include <iostream>

using namespace std;

// 1. 구조제란?
// 2. 구조체의 선언과 초기화.
// 3. 구조체 배열


int main_3() {
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열 : 같은 데이터형의 집합

	// 축구선수 데이터 만들고싶다 (한사람에 대한 여러 데이터형이 필요함), 하나의 집합으로 표현하면 편함, 
	// 배열은 그게 안됨, 이럴때 구조체 사용
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B; // 구조체를 정의하는 부분에서 중괄호 뒤에 변수명을 입력하면 새로운 구조체를 선언하지 않아도 입력한 변수명으로 구조체가 만들어진다.


	// 구조체를 만들면 변수의 데이터형으로 사용할 수 있음
	//MyStruct A;			// A라는 이름의 MyStruct 형 변수를 선언
	//A.name = "Son";		// . 멤버연산자를 사용해서 구조체형 변수에 데이터 입력
	//A.position = "Striker";
	//A.height = 183;
	//A.weight = 77;
	
	// 구조체에 {}와 ,로 초기화
	MyStruct A = {
		"Son",
		"Striker",
		183,
		77
	};
	
	cout << A.name << endl;
	cout << A.position<< endl;
	cout << A.height << endl;
	cout << A.weight << endl;


	// 구조체역시 배열처럼 값을 기입할때 구조체의 맴버해 해당되는 모든값을 입력하지 않아도 0으로 저장됨
	B = {

	};
	cout << B.height << endl;

	// 구조체를 배열로 선언가능
	MyStruct C[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << C[0].height << endl;



	return 0;
}