#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char inputchar; //�Է¹��� ���ĺ� ���� 
	char nextchar; // �� ���� ���ĺ� ���� 
	
	printf("enter a character : "); // �Է� �ȳ� �޽��� ��� 
	scanf(" %c", &inputchar); 
	
	nextchar = inputchar + 1; // �Է°��� ���� ���� ��� 
	
	printf("the next character of %c (%i) is %c (%i)\n", inputchar, nextchar); // ��� ��� 
	
	return 0;
}
