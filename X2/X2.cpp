#include<stdio.h>

int result(int, int);

int main()
{
	int x[2];
	int* n = x;
	for (int i = 0; i < 2; i++)
	{
		if (scanf_s("%d", &x[i]) != 1)
		{
			printf("ERROR");
			return 1;
		}
		else if (x[i] < -1000 || x[i] > 1000)
		{
			printf("ERROR");
			return 1;
		}
	}
	printf("%d", result(*n, *(n + 1)));
	return 0;
}

int result(int x1, int s)
{
	int x2 = (2 * s) - x1;
	return x2;
}
