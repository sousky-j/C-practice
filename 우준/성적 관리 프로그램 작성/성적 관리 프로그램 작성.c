#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning (disable: 6031)
void input_score(char *name, char *sub, int score[5][5]);
void cale_total(int score[5][5]);
void print_score(char* name, char* sub, int score[5][5]);
void main() {
	char name[][5] = { "영희", "철수", "영철", "영수","총점"};
	char sub[][12] = { "국어","영어","수학","과학","학생별 총점"};
	int score[5][5] = { 0 };

	input_score(*name, *sub, score);
	print_score(*name, *sub, score);
	cale_total(score);
	print_score(*name, *sub, score);
}
void input_score(char* name, char* sub, int score[5][5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%s 학생의 %s 과목 점수를 입력하세요: ", name + (5*i), sub+(12*j));
			scanf("%d", &score[i][j]);
		}
	}
}
void cale_total(int score[5][5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			score[4][i] += score[j][i];
			score[i][4] += score[i][j];
		}
	}
}
void print_score(char* name, char* sub, int score[5][5]) {
	printf("\t");
	for (int i = 0; i < 5; i++)
		printf(" [%s] ", sub + (12*i));
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf(" [%s]  ", name + (5*i));
		for (int j = 0; j < 5; j++)
			printf(" [%d]\t ", score[i][j]);
		printf("\n");
	}
}