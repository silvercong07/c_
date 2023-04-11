#include<stdio.h>
int main()
{
	int a, b;
	double size;
	scanf("%d %d", &a, &b);
	size = (double)a * b / 2;
	printf("%.1lf", size);
	return 0;
}