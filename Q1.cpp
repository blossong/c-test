/* 230109 impact Q
�غ��� ���̸� �޾� ���̸� ����ϰ� Y �Ǵ� y�� �Է¹޾� ��� �����ϰų� �ƴϸ� �����*/
#include <stdio.h>
#pragma warning(disable:4996)  // visual studio���� scanf_s ��� ����

int main() {
	int Base, Height;
	double width = 0;
	char sign;

	do {
		printf("Base = ");
		scanf("%d", &Base);
		printf("Height = ");
		scanf("%d", &Height);
		printf("Triangle width = % .1f\n", (double)Base * Height / 2);
		printf("Continue? ");
		scanf(" %c", &sign);                // ������ �� �տ� �־���� ��
	} while (sign == 'Y' || sign == 'y');

	return 0;
}