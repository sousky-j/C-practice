#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char a[100], b[100];
	scanf("%s", &a);
	scanf("%s", &b);
	int r = strlen(a);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if (a[i] == b[j])
			{
				printf("%c", a[i]);
				break;
			}
		}
	}

}