#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) printf("*");						// �簢�� ù��° �� ���
	printf("\n");													// �� �ٲ�
	for (int i = 1; i < n-1; i++)									// n=5; i�� 4���� ���� ������ �ݺ�(3�� �ݺ�)
	{
		for (int j = 0; j < n; j++)									// n=5; j�� 5���� ���� ������ �ݺ�(4�� �ݺ�)
		{
			if (j == 0 || j == i || j == n - i - 1 || j == n - 1)	// (j�� 0�� ����)or(j�� i�� ����)or(j�� 4�� ����)or(j�� (4-i)�� ����)
				printf("*");										// ���� ���� �� �ϳ��� ���� ������ ��� "*"���
			else
				printf(" ");										// ���� ������ �������� ���� ��� " "���
		}
		printf("\n");												// �� �ٲ�
	}
	for (int i = 0; i < n; i++)										// �簢�� ������ �� ���
	{
		printf("*");
	}
	
	return 0;
}
/*
	-�簢�� ���
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