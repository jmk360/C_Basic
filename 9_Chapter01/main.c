// �� 8�� �迭

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

//int main(void) {
//	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main(void) {
//	int a[10] = {0,}; // ��ü ���Ҹ� 0���� ���ʱ�ȭ �ϰ� �ʹٸ� �̷��� �ϸ� �ȴ�.
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

// �迭�� ���� �߿��� �ִ� ã��
//int main(void) {
//	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
//	int maxValue = INT_MIN;
//	for (int i = 0; i < 10; i++) {
//		if (a[i] > maxValue) {
//			maxValue = a[i];
//		}
//	}
//	printf("%d\n", maxValue);
//	system("pause");
//	return 0;
//}

//int main(void) {
//	int a[10] = { 6, 6, 4, 3, 9, 8, 0, 1, 2, 7 };
//	int maxValue = INT_MIN;
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
//		if (maxValue <= a[i])
//			maxValue = a[i];
//	}
//	printf("%d\n", maxValue);
//	system("pause");
//	return 0;
//}

//// �迭�� ���� �߿��� �ּڰ� ã��
//int main(void) {
//	int a[10] = { 6, 6, 4, 3, 9, 8, 0, 1, 2, 7 };
//	int minValue = INT_MAX;
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
//		if (minValue >= a[i])
//			minValue = a[i];
//	}
//	printf("%d\n", minValue);
//	system("pause");
//	return 0;
//}

//int main(void) {
//	char a[20];
//	scanf("%s", a);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}

//int main(void) {
//	char a[20] = "Hello World";
//	a[4] = ',';
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}

int main(void) {
	char a[] = "Hello World";
	int count = 0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if (a[i] == 'l') {
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}