#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double a, b, result; 
	
	printf("enter two intergers : ");
	scanf("%1f %1f", &a, &b);
	
	result = a / b;
	
	printf("%.61f / %.61f = %.61f\n", a, b, result);
	
		char ch;
	
	printf("enter a character : ");
	scanf("%c", &ch);
	
	char next_ch = ch + 1;
	
	printf("the next character of %c iand its ASCII value is %i.\n", next_ch, next_ch);
	
	char c;
	int i;
	
	printf("input a number : ");
	scanf("%c", &c);
	
	i = c - '0';
	printf("The input number is %i\n", i);
	
	int input_int;
	float input_float;
	
	printf("enter an integer : ");
	scanf("%d", &input_int);
	
	printf("enter a float : ");
	scanf("%f", &input_float);
	
	printf("integer : %d, float :k %f\n", input_int, input_float);

	return 0;
}
