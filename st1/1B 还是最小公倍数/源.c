#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int gcd(int a,int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int C = 0, N = 0;
	int m = 1;
	int num[30];
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d",&N);
		for (int j = 0; j < N; j++)
		{
			scanf("%d",&num[j]);
			m = num[j] / gcd(m, num[j]) * m;
		}
		printf("%d\n", m);
		m = 1;
	}
	return 0;
}