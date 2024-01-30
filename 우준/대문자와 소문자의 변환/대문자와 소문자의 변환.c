#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#pragma warning (disable: 6031)

void main()
{
	int r, i;
	char a[100];
	printf("입력: ");
	gets_s(a, sizeof(a));
	r = strlen(a);

	for (i = 0; i < r; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] > 90)
			{
				a[i] -= 32;
			}
			else if (a[i] <= 90)
			{
				a[i] += 32;
			}

		}
	}
	a[r] = '\0';
	printf("결과 ==> ");
	puts(a);
}