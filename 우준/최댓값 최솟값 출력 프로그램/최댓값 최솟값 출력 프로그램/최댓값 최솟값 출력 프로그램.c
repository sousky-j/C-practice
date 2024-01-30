#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

void main() {
	int a, b, c, d, e, m=0,n;
	printf("5개의 숫자를 입력하세요:");
	scanf("%d", &a); n = a;  if (a >= m) m = a;
	scanf("%d", &b); if (b >= m) m = b; if (n >= b) n = b;
	scanf("%d", &c); if (c >= m) m = c; if (n >= c) n = c;
	scanf("%d", &d); if (d >= m) m = d; if (n >= d) n = d;
	scanf("%d", &e); if (e >= m) m = e; if (n >= e) n = e;
	printf("최댓값: %d\n", m);
	printf("최솟값: %d\n", n);
}