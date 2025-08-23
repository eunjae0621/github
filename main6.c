#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b; 
	
	printf("Input two integers: "); //두 정수 입력 안내 및 입력받기 
	scanf("%i %i", &a, &b);
	
	//사칙연산 및 결과 출력 
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	
	return 0;
}
