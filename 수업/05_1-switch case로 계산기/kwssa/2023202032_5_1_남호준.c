#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() // switch case�� ����
{
	int a, b;
	char c;
	printf("������ �� �ٷ� �Է��ϼ��� :");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d�Դϴ�.\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d�Դϴ�.\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d�Դϴ�.\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %.2f�Դϴ�.\n", a, b, (float)a / (float)b);
		break;
	case '%':
		printf("%d %% %d = %d�Դϴ�.\n", a, b, a % b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}