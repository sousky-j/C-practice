#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 6031)


void main()
{
	char a[100], b[100];

	printf("ù��°: ");
	gets_s(a, sizeof(a));
	
	printf("�ι�°: ");
	gets_s(b, sizeof(b));

	if (strcmp(a, b) != 0)
	{
		strcat(a, b);
	}
	printf("��� ���: %s", a);
}