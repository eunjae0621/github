#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c; // ����ڰ� �Է��� ���ڸ� ������ ���� 
	int i; // ��ȯ�� ���� ���� 
	
	printf("input a number :");
	scanf("%c", &c); 
	
	i =  c - '0'; // ������ ���ڸ� ���� ���ڷ� ��ȯ�ϴ� �� 
	printf("The input number is %i\n", i);
	
	return 0;
}
