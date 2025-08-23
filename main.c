#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c; // 사용자가 입력할 한자리 문자형 숫자 
	int i; // 변환된 정수 숫자 
	
	printf("input a number :");
	scanf("%c", &c); 
	
	i =  c - '0'; // 문자형 숫자를 정수 숫자로 변환하는 식 
	printf("The input number is %i\n", i);
	
	return 0;
}
