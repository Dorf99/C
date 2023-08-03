// 동적 구조체 생성
// temp* ps = new temp;
// new 연산자를 통해 동적으로 생성된 구조체에서 맴버연산자 사용 방법

#include <iostream>

struct MyStruct
{
	char name[20];
	int age;
};
/* MyStruct 구조체 안에 char name[20], int age 라는멤버 2개*/

int main_7_2()
{
	using namespace std;

	MyStruct* temp = new MyStruct;				// 구조체를 new 연사자를 통해 동적으로 선언

	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;							// . 대신에 -> 멤버연산자를 통해 구조체의 name 맴버에 접근

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;							// ()을 통해 구조체의 변수이름을 적고*을 붙이면 . 맴버연산자로도 접근가능

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << temp->age << "살 이군요!";
	
	return 0;
}