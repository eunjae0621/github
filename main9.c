#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b;
	int and_result, or_result, xor_result, lshift_result, rshift_result;
	
	//�� ���� �Է� �ȳ� �� �Է� 
	printf("Input two integers: ");
	scanf("%i %i", &a, &b);
	
	//��Ʈ ���� ��� 
	and_result = a & b; //and
	or_result = a | b; //or
	xor_result = a ^ b; //xor
	lshift_result = a << b; //a�� b ��Ʈ��ŭ ���� �̵� 
	rshift_result = a >> b; //�� b ��Ʈ��ŭ ������ �̵� 
	
	//��� ��� 
	printf("&_result is %d\n", and_result);
	printf("|_result is %d\n", or_result);
	printf("^_result is %d\n", xor_result); 
	printf("<<_result is %d\n", lshift_result);
	printf(">>_result is %d\n", rshift_result);
	
	return 0;
}
