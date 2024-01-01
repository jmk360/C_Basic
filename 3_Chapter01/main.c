// 변수와 상수

// stdio.h 헤더파일을 시스템 디렉토리에서 찾아서 ctrl + c, ctrl + v 한다. -> <>는 시스템 디렉토리에서 찾아온다는 의미이다.
#include <stdio.h>

//int main(void) {
//	printf("Hello World!\n");
//	// system() 함수를 사용하여 운영체제의 기본적인 기능을 사용 할 수 있다.
//	system("pause");
//	return 0;
//}

//int main(void) {
//	int a = 7;
//	printf("The number is %d.\n", a);
//	system("pause");
//	return 0;
//}

// 초기화 되지 않은 변수를 사용하면 visual studio에서 에러가 발생한다.
//int main(void) {
//	int a; // 초기화 되지 않은 변수는 쓰레기 값이 들어간다.
//	printf("The number is %d.\n", a);
//	system("pause");
//	return 0;
//}

//int a; // 전역 변수로 선언된 변수는 기본적으로 0으로 초기화 된다.
//
//int main(void) {
//	printf("The number is %d.\n", a);
//	system("pause");
//	return 0;
//}