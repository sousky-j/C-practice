#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void func(int *p1, int *p2);
void main()
{
	int p = 10, q = 20;
	int *k, *j;
	k = &p;
	j = &q;
	printf("%d %d %d %d %d %d %d %d\n", p, &p, q, &q, k, *k, j, *j);
	func(&p, &q);
	printf("%d %d %d %d %d %d %d %d\n", p, &p, q, &q, k, *k, j, *j);
	func(k, j);
	printf("%d %d %d %d %d %d %d %d\n", p, &p, q, &q, k, *k, j, *j);
}

void func(int *p1, int *p2)
{
	int *tmp = p1;
	p1 = p2;
	p2 = tmp;
}