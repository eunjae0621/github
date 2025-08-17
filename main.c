#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int x, y, z, m;
	int a, b, c;
	x = 2;
	z = 1;
	a = 3;
	b = 4;
	c = 5;
	y = a * x * x + b * x + c;
	m = (x + y + z) / 3;
	
	printf("y=%d, m=%d", y, m); 
	
	int d, f;
	printf("input two integers : ");
	scanf("%i %i", &d, &f);
	
	printf("%d + %d = %d\n", d, f, d + f);
	printf("%d - %d = %d\n", d, f, d - f);
	printf("%d * %d = %d\n", d, f, d * f);
	printf("%d / %d = %d\n", d, f, d / f);
	printf("%d %% %d = %d\n", d, f, d % f);
	
	int total_sec, min, sec;
	
	printf("Input the second : ");
	scanf("%d", &total_sec);
	
	min = total_sec / 60;
	sec = total_sec % 60;
	
	printf("The time is %d : %d\n", min, sec);
	
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
	
	return 0;
}
