#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void) {
//	int n, sum = 0;
//	printf("n�� �Է��ϼ���. ");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		sum += i;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main(void) {
//	// ���ѷ���
//	for (;;) {
//
//	}
//	system("pause");
//	return 0;
//}

//// -1�� �Էµ� ������ ���ϱ�
//int main(void) {
//	int sum = 0;
//	for (; 1;) {
//		int x;
//		scanf("%d", &x);
//		if (x == -1)
//			break;
//		sum += x;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

// Ư�� ���ڸ� N�� ����ϱ�(while�� ���)1

//int main(void) {
//	char a;
//	int n;
//	scanf("%d %c", &n, &a);
//	int i = 0;
//	while (i < n) {
//		printf("%c\n", a);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main(void) {
//	int n;
//	char a;
//	scanf("%d %c", &n, &a);
//	while (n--) {
//		printf("%c\n", a);
//	}
//	system("pause");
//	return 0;
//}

//// Ư�� ������ ������ ����ϱ�(while�� ���)
//int main(void) {
//	int n, i = 1;
//	scanf("%d", &n);
//	while (i <= 9) {
//		printf("%d x %d = %d\n", n, i, n * i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//// Ư�� ������ ������ ����ϱ�(for�� ���)
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= 9; i++) {
//		printf("%d x %d = %d\n", n, i, n * i);
//	}
//	system("pause");
//	return 0;
//}

//// ������ ����ϱ�(while�� ���)
//int main(void) {
//	int i = 1, j = 1;
//	while (i <= 9) {
//		j = 1;
//		while (j <= 9) {
//			printf("%d x %d = %d\n", i, j, i * j);
//			j++;
//		}
//		printf("==================\n");
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//// ������ ����ϱ�(for�� ���)
//int main(void) {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%d x %d = %d\n", i, j, i * j);
//		}
//		printf("====================\n");
//	}
//	system("pause");
//	return 0;
//}