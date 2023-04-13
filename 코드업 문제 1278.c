//자릿수 구하기
#include<stdio.h>
int main()
{
	int number, a = 1;
	scanf("%d", &number);
	/*
	while (number != 0)
	{
		number = number / 10;
		a++;
	}
	printf("%d", a);
	*/

	for (; number / 10 != 0; 1)
	{
		number = number / 10;
		a += 1;
	}
	printf("%d", a);
	return 0;
}