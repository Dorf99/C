// 1. 논리 연산자
// - 논리 합 연산자
// - 논리 곱 연산자
// - 논리 부정 연산자
#include <iostream>

using namespace std;

int main_2()
{
	// 논리 푠현식
	// 논리합, 논리곱, 논리부정 연산자

	// 논리합 ||  좌항 과 우항중 하나만 true 나 0이 아니면 true 그렇지 않으면 false
	/*
	5 == 5 || 5 == 9  false
	5 > 3 || 5 > 10   true
	5 > 8 || 5 < 10   true
	5 > 9 || 5 < 2    false
	*/

	// 논리곱 &&  두개의 표현식이 모두 true여야 true
	/*
	5 == 5 && 9 == 9   true
	5 == 5 && 9 != 9   false
	10 < 2 && 10 > 2   false
	*/

	// 논리부정 ! 표현식을 반대로 반환
	// !(표현식)

	cout << "당신의 나이를 입력하십시오.";
	int age;
	cin >> age;
	if (age < 0 || age > 100) {
		cout << "거짓말 하시면 안됩니다!\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "당신은 20대 이군요?\n";
	}
	else {
		cout << "당신의 나이를 잘 모르겠습니다.\n";
	}

	return 0;
}