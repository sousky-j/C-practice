#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main()
{
	int a, b, c, d, e, f, j = 0;
	printf("<3, 5, 6 ��� �Ǻ���>\n");
	printf("�Է��� ��:");
	scanf("%d", &a);

	b = a / 100;
	c = (a % 100) / 10;
	d = (a % 10);
	e = a / 2;
	f = e % 3;
	if ((b + c + d) % 3 == 0)
		j += 1;
	if (d == 0 || d == 5)
		j += 2;
	if (f == 0)
		j += 4;
	switch (j)
	{
	case 7:
		printf("%d�� %d�� %d�� ����Դϴ�.", 3, 5, 6);
		break;
	case 6:
		printf("%d�� %d�� ����Դϴ�.", 5, 6);
		break;
	case 5:
		printf(" %d�� %d�� ����Դϴ�.", 3, 6);
		break;
	case 3:
		printf("%d�� %d�� ����Դϴ�.", 3, 5);
		break;
	case 2:
		printf("%d�� ����Դϴ�.", 5);
		break;
	case 1:
		printf("%d�� ����Դϴ�.", 3);
		break;
	default:
		printf("�Ǻ��� �� ���� ���Դϴ�.");
	}
}