#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	long long dp[51];
	dp[2] = 2;
	dp[1] = 1;
	for (int i = 3; i <= 50; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	int N;
	int a, b;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d %d", &a, &b);
		printf("%lld\n", dp[b - a]);
	}
	return 0;
}