#include <stdio.h>

int main()
{
	int C;
	scanf("%d", &C);
	long long bline[10001];
	bline[0] = 1;
	bline[1] = 2;
	bline[2] = 7;
	for (int i = 3; i <= 10000; i++)
	{
		bline[i] = bline[i - 1] + 4 * (i - 1) + 1;
	}
	while (C--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", bline[n]);
	}
	return 0;
}