// 제 3강 기본 입출력

// scanf함수는 보안적으로 취약하기때문에, visual studio에서 막아났다. scanf를 사용하기 위해서 다음과 같이 작성한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void) {
//	int a;
//	scanf("%d", &a);
//	printf("입력한 숫자는 %d입니다.\n", a);
//	system("pause");
//	return 0;
//}

//int main(void) {
//	double a;
//	scanf("%lf", &a);
//	printf("%.2lf\n", a);
//	system("pause");
//	return 0;
//}

//// 두 숫자를 입력 받아 순서 바꾸어 출력하기
//int main(void) {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", b, a);
//	system("pause");
//	return 0;
//}

// 한 자리 씩 끊어서 입력 받기
//int main(void) {
//	int a, b, c;
//	scanf("%1d%1d%1d", &a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}