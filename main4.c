#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double a, b; // 입력받을  두 실수 
	
	printf("enter two integers :"); // 두 실수 입력 
	scanf("%1f %1f", &a, &b);
	
	printf("%.6f / %.6f = %.6f\n", a, b, a / b); // a/b, b/a 계산 및 소수점 6자리까지 출력 
	
	return 0;
}

