#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int totalsec; // 입력받은 총 초 
	int min; //분 
	int sec; //초 
	
	//초 입력 안내 및 입력 
	printf("Input the second: ");
	scanf("%d", &totalsec);
	
	//분과 초 계산 
	min = totalsec / 60;
	sec = totalsec % 60;
	
	//결과 출력 
	printf("The time is %d : %d\n", min, sec);
	return 0;
}
