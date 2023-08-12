// 1. 분할 컴파일
// 2. #ifndef(if not define)

#include "struct.h"
// 헤더 파일을 여러 파일에 포함시킬 때에,
// 반드시 단 한 번만 포함시켜야 한다.

int main_1() {
	MyStruct PandaCoding = {
		"Panda",
		26,
	};

	display(PandaCoding);
	return 0;
}

