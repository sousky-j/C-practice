#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void input_name(char name[4][10]);
void input_score(char name[4][10], char sub[4][6], int score[5][5]);
void cale_total(int score[5][5]);
void print_score(char name[4][10], char sub[4][6], int score[5][5]);

void main()
{
	char name[4][10];
	char sub[4][6] = { "국어", "영어", "수학", "과학" };
	int score[5][5] = { 0 };

	input_name(name);
	input_score(name, sub, score);
	cale_total(score);
	print_score(name, sub, score);
}


void input_name(char name[4][10])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 학생의 이름을 입력하세요: ", i + 1);
		scanf("%s", &name[i]);
	}
}

void input_score(char name[4][10], char sub[4][6], int score[5][5])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%s의 %s 과목 점수를 입력하세요: ", name[i], sub[j]);
			scanf("%d", &score[i][j]);
		}
	}
}

void cale_total(int score[5][5])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			score[4][i] += score[j][i];
			score[i][4] += score[i][j];
		}
	}
}

void print_score(char name[4][10], char sub[4][6], int score[5][5])
{
	for (int i = 0; i < 4; i++)
		printf("  %s", sub[i]);
	printf("\n  ");
	for (int i = 0; i < 5; i++)
	{
		if (i != 4)
			printf("%s", name[i]);
		else
			printf("   ");
		for (int j = 0; j < 5; j++)
			printf("%3d ", score[i][j]);
		printf("\n");
	}

}