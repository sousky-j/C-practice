#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#include <string.h>
#pragma warning(disable : 6031)

void main() // 12_1-문자열 출력 프로그램
{
	char stack[10][10];
	char reverse[10][10];
	int top = 0;
	int r1;
	for (int i = 0; i < 10; i++)
	{
		top++;
		printf("%d번째 문자열을 입력하세요: ", i + 1);
		scanf("%s", &stack[i]);
		r1 = strlen(stack[i]);
		if (strcmp(stack[i], "end") == 0)
		{
			top--;
			break;
		}
		else
		{
			for (int j = 0; j < r1; j++)
			{
				reverse[i][j] = stack[i][r1 - j - 1];
			}
			reverse[i][r1] = '\0';
		}
	}

	for (int i = 0; i < top; i++)
	{
		printf("%s\n", reverse[i]);
	}
}