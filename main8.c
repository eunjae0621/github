#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int year; //�Է¹��� ���� 
	
	printf("Input the year: ");
	scanf("%d", &year);
	
	//���� ���� (���� 4�� ������ �������鼭 100���� ������ �������� �ʰų� 400���� ������ �������� ����) 
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("Is the year %d the leap year? Yes\n", year);
	} else {
	    printf("Is the year %d the leap year? No\n", year);
	}
	
	return 0;
}
