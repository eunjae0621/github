#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double a, b; // �Է¹���  �� �Ǽ� 
	
	printf("enter two integers :"); // �� �Ǽ� �Է� 
	scanf("%1f %1f", &a, &b);
	
	printf("%.6f / %.6f = %.6f\n", a, b, a / b); // a/b, b/a ��� �� �Ҽ��� 6�ڸ����� ��� 
	
	return 0;
}

