#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char a[100] = {"Ice Vanilla Latte"};

	printf("orignal text: [%s]\n", a);
	int r = strlen(a);
	for (int i = 0; i < r; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 90)
				a[i] -= 32;
			else if (a[i] < 90)
				a[i] += 32;
		}
	}
	printf("%s\n", a);
	for (int i = 0; i < r; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 90)
				a[i] -= 32;
			else if (a[i] < 90)
				a[i] += 32;
		}
	}
	printf("%s\n", a);
}