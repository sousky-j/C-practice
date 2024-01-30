#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 6_2-제한된 별표 출력
{
	int a;
	while (1)
	{
		printf("별의 갯수를 입력하십시오: ");
		scanf("%d", &a);

		if (a == 0)
			continue;
		else if (a > 10)
		{
			printf("그렇게 많은 별표를 출력할 수 없습니다.");
			break;
		}
		else
		{
			for (int i = 0; i < a; i++)
				printf("*");
			printf("\n");
		}
	}
}