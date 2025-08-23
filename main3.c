#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char inputchar; //입력받을 알파벳 문자 
	char nextchar; // 그 다음 알파벳 문자 
	
	printf("enter a character : "); // 입력 안내 메시지 출력 
	scanf(" %c", &inputchar); 
	
	nextchar = inputchar + 1; // 입력값의 다음 문자 계산 
	
	printf("the next character of %c (%i) is %c (%i)\n", inputchar, nextchar); // 결과 출력 
	
	return 0;
}
