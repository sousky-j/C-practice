#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main() {
	int a, b, c, d, e, m=0,n;
	printf("5���� ���ڸ� �Է��ϼ���:");
	scanf("%d", &a); n = a;  if (a >= m) m = a;
	scanf("%d", &b); if (b >= m) m = b; if (n >= b) n = b;
	scanf("%d", &c); if (c >= m) m = c; if (n >= c) n = c;
	scanf("%d", &d); if (d >= m) m = d; if (n >= d) n = d;
	scanf("%d", &e); if (e >= m) m = e; if (n >= e) n = e;
	printf("�ִ�: %d\n", m);
	printf("�ּڰ�: %d\n", n);
}