#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	long long dp[31];
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= 30; i++)
	{
		dp[i] = dp[i - 1] + 2 * dp[i - 2];
	}
	while (T--)
	{
		int N;
		scanf("%d", &N);
		printf("%lld\n", dp[N]);
	}
	return 0;
}