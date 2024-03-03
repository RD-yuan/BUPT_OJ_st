#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int N;
	long long dp[41];
	dp[1] = 3;
	dp[2] = 8;
	for (int i = 3; i < 40; i++)
	{
		dp[i] = 2 * dp[i - 1] + 2 * dp[i - 2];
	}
	while (scanf("%d", &N) != EOF)
	{
		printf("%lld\n", dp[N]);
	}
	return 0;
}