#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int year; //입력받을 연도 
	
	printf("Input the year: ");
	scanf("%d", &year);
	
	//윤년 판정 (조건 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않거나 400으로 나누어 떨어지면 윤년) 
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("Is the year %d the leap year? Yes\n", year);
	} else {
	    printf("Is the year %d the leap year? No\n", year);
	}
	
	return 0;
}
