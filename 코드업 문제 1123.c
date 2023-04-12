#include<stdio.h>
int main()
{
	int a;
	double b;
	scanf("%d", &a);
	b = a * 9.0/5 + 32;
	printf("%.3lf", b);
	return 0;
}