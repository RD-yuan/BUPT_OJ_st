#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int T = 0, N = 0, a = 0, b = 0;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &N);
		a = N % 4;
		b = N % 2;
		N %= 10;
		if (N == 0 || N == 1 || N == 5 || N == 6 || N == 9)
			printf("%d\n", N);
		else if (N == 4)
		{
			printf("6\n");
		}
		else
		{
			if (b == 0)
				if (a == 0)
					N = N * N * N * N;
				else
					N = N * N;
			else
				if (a == 3)
					N = N * N * N;
			N %= 10;
			printf("%d\n", N);
		}
	}
	return 0;
}