#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable : 6031)

void main() // 11_2-성적 관리 프로그램 작성
{
	int a[5][5];
	int n = 0, m = 0;
	char b[][5] = {"영희", "철수", "영철", "영수"};
	char c[][5] = {"국어", "영어", "수학", "과학"};
	for (int i = 0; i < 4; i++)
	{
		printf("%s 학생의 과목별 점수를 차례대로 입력하세요: ", b[i]);
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	for (int i = 0; i < 4; i++)
	{
		a[4][i] = 0;
		a[i][4] = 0;
		for (int j = 0; j < 4; j++)
		{
			a[4][i] += a[j][i];
			a[i][4] += a[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%s의 총점: %d ", b[i], a[i][4]);
		printf("%s과목의 총점: %d ", c[i], a[4][i]);
		printf("\n");
	}
}