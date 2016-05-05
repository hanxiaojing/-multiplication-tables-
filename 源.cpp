#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void MultiplicationTable()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d*%d=%2d    ", i, j, i*j);

		}
		printf("\n");
	}
}

int main()
{
	MultiplicationTable();
	system("pause");
	return 0;
}
