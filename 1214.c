#include<stdio.h>
int main()
{
	int year, month;
	scanf("%d %d", &year, &month);
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		switch (month)
		{
		case 2:
			printf("29");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30");
			break;
		default:
			printf("31");
		}
	}
	else
	{
		switch (month)
		{
		case 2:
			printf("28");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30");
			break;
		default:
			printf("31");
		}
	}
	return 0;
}