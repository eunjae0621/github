#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b;
	int and_result, or_result, xor_result, lshift_result, rshift_result;
	
	//두 정수 입력 안내 및 입력 
	printf("Input two integers: ");
	scanf("%i %i", &a, &b);
	
	//비트 연산 계산 
	and_result = a & b; //and
	or_result = a | b; //or
	xor_result = a ^ b; //xor
	lshift_result = a << b; //a를 b 비트만큼 왼쪽 이동 
	rshift_result = a >> b; //를 b 비트만큼 오른쪽 이동 
	
	//결과 출력 
	printf("&_result is %d\n", and_result);
	printf("|_result is %d\n", or_result);
	printf("^_result is %d\n", xor_result); 
	printf("<<_result is %d\n", lshift_result);
	printf(">>_result is %d\n", rshift_result);
	
	return 0;
}
