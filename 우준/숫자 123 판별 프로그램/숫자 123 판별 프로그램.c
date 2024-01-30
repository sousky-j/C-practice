#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main()
{
	int a;
	printf("숫자를 입력하세요:");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("입력하신 숫자는 %d입니다.", 1);
		break;
	case 2:
		printf("입력하신 숫자는 %d입니다.", 2);
		break;
	case 3:
		printf("입력하신 숫자는 %d입니다.", 3);
		break;
	default:
		printf("1,2,3이 아닙니다.");
	}
}