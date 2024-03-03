#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int N;
	long long dp[51];
	dp[1] = 3;
	dp[2] = 6;
	dp[3] = 6;
	for (int i = 4; i <= 50; i++)
	{
		dp[i] = dp[i - 1] + 2 * dp[i - 2];
	}
	while (scanf("%d", &N) != EOF)
	{
		printf("%lld\n", dp[N]);
	}
	return 0;
}