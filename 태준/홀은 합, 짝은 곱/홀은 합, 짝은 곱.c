#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main()
{
	int b = 0, c;
	unsigned long a = 1;
	printf("ÀÔ·ÂÇÒ ¼ö:");
	scanf("%d", &c);
	for (int i = 1; i <= c; i++)
	{
		if (i % 2 == 0)
			a *= i;
		else
			b += i;
	}
	printf("È¦¼öÇÕ : %d\n", b);
	printf("Â¦¼ö°ö : %u\n", a);
}