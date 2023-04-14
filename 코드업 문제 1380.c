//두 주사위의 합 
#include<stdio.h>
int main()
{
	int k, i = 1, j = 1;
	scanf("%d", &k);
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; (j <= (k - i)) && (j <= 6); j++)
		{
			if (i + j == k)
				printf("%d %d\n", i, j);
		}
	}
	return 0;
}