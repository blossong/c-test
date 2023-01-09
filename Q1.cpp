/* 230109 impact Q
밑변과 높이를 받아 넓이를 출력하고 Y 또는 y를 입력받아 계속 진행하거나 아니면 멈춘다*/
#include <stdio.h>
#pragma warning(disable:4996)  // visual studio에서 scanf_s 경고 제거

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
		scanf(" %c", &sign);                // 공백을 꼭 앞에 넣어줘야 함
	} while (sign == 'Y' || sign == 'y');

	return 0;
}