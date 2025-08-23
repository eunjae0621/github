#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
	int year, is_leap;
	
	printf("Input the year : ");
	scanf("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))	
	is_leap = 1;
	else
	is_leap = 0;
	
	printf("Is the year %d the leap year? %d\n", year, is_leap);
	
	int e,g; 
	printf("Input two integers : ");
	scanf("%i %i", &e, &g);
	
	printf("result is %d\n", e & g);
	printf("result is %d\n", e | g);
	printf("result is %d\n", e ^ g);
	printf("result is %d\n", e << g);
	printf("result is %d\n", e >> g);
	
int main(int argc, char *argv[]) {
	printf("Hello, Sookmyung Electronics!\n"); //Hello, Sookmyung Electronics! ���
	return 0;
}
