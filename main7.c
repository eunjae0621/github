#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int totalsec; // �Է¹��� �� �� 
	int min; //�� 
	int sec; //�� 
	
	//�� �Է� �ȳ� �� �Է� 
	printf("Input the second: ");
	scanf("%d", &totalsec);
	
	//�а� �� ��� 
	min = totalsec / 60;
	sec = totalsec % 60;
	
	//��� ��� 
	printf("The time is %d : %d\n", min, sec);
	return 0;
}
