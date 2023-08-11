// 1. 함수로 배열 관리하기
// - 시작주소와 크기를 전달
// - 시작주소와 끝주소를 전달
#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int*, int*);	

// 배열에 저장되어 있는 값을 모두 출력하는 함수 만들기
//int main() {
//
//	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	cout << "size of arr " << sizeof arr << endl;
//	// arr == &arr[0]
//	int sum = sumArr(arr, SIZE);
//
//	cout << "함수의 총 합은" << sum << "입니다.";
//	return 0;
//}
//
//int sumArr(int* arr, int n) {
//	cout << "size of arr " << sizeof arr << endl;
//	int total = 0;
//
//	for (int i = 0; i < n; i++)
//		total += arr[i];
//	return total;	// main함수의 sum에 total이 저장
//}

int main_3() {

	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	
	int sum = sumArr(arr, arr+SIZE);
	cout << "함수의" << SIZE << "까지의 합은 " << sum << "입니다.\n";

	sum = sumArr(arr, arr + 3);
	cout << "함수의" << "세번째 인덱스 까지의 합은 " << sum << "입니다.";
	return 0;
}

int sumArr(int* begin, int* end) {	// 함수에 배열의 시작구조와 끝구조를 알려주어도 동일하게 만들수 있다.
	
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++)
		total += *pt;
	return total;	
}
