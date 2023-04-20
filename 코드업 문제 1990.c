#include<stdio.h>
int main()
{
	char arr[501] = { 0 };
	int sum=0;
	scanf("%s", arr);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		sum += arr[i];
	}
	if (sum % 3 == 0)
	{
		printf("1");
	}
	else printf("0");
	return 0;
}