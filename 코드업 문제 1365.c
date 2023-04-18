#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) printf("*");						// 사각형 첫번째 줄 출력
	printf("\n");													// 줄 바꿈
	for (int i = 1; i < n-1; i++)									// n=5; i는 4보다 작을 때까지 반복(3번 반복)
	{
		for (int j = 0; j < n; j++)									// n=5; j는 5보다 작을 때가지 반복(4번 반복)
		{
			if (j == 0 || j == i || j == n - i - 1 || j == n - 1)	// (j가 0과 같음)or(j가 i와 같음)or(j가 4과 같음)or(j가 (4-i)와 같음)
				printf("*");										// 위의 조건 중 하나라도 조건 충족할 경우 "*"출력
			else
				printf(" ");										// 위의 조건이 충족하지 않을 경우 " "출력
		}
		printf("\n");												// 줄 바꿈
	}
	for (int i = 0; i < n; i++)										// 사각형 마지막 줄 출력
	{
		printf("*");
	}
	
	return 0;
}
/*
	-사각형 출력
	for (int i = 1; i <= n; i++)
	{
		if ((i == 1) || (i == n))
		{
			for (int i = 0; i < n; i++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int i = 0; i < 1; i++)
			{
				printf("*");
			}
			for (int i = 0; i < n-2; i++)
			{
				printf(" ");
			}
			for (int i = 0; i < 1; i++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	*/