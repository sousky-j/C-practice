#include <stdio.h>

void main() // 5_2-for문과 if문을 이용한 아스키코드 출력 프로그램
{
	for (int i = 0; i <= 127; i++)
	{
		if ((i % 16) == 0)
		{
			printf("-----------------------\n");
			printf("10진수  16진수  문자\n");
			printf("-----------------------\n");
		}
		printf("%4d\t%x\t%3c\n", i, i, i);
	}
}