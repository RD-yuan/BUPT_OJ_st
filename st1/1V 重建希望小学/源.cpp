#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int C;
	scanf("%d", &C);
	long long dp[31];
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= 30; i++)
	{
		dp[i] = dp[i - 1] + 2 * dp[i - 2];
	}
	while (C--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", dp[n]);
	}
	return 0;
}