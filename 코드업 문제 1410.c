#include<stdio.h>
int main()
{
	int arr[3] = { 0 };
	char a;
	while (scanf("%c", &a) != EOF)
	{
		arr[a - '(']++;
	}
	for (int i = 0; i < 1; i++)
	{
		printf("%d %d", arr[i], arr[i+1]);
	}
	return 0;
}