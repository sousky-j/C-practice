#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)

int reverse(int p)
{
	int a=1,i=1,k=1;
	while (a!=0)
	{
		k *= 10;

		a = ((p % k) * 10) / k;
		if (a != 0)
			printf("%d", a);

		i += 1;
	}
	return a;
}

void main()
{
	int Input;
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &Input);
	reverse(Input);
}