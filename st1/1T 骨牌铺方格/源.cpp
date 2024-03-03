#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>

int main()
{
	long long dominoes[55];
	dominoes[1] = 1;
	dominoes[2] = 2;
	for (int i = 3; i <= 50; i++)
	{
		dominoes[i] = dominoes[i - 1] + dominoes[i - 2];
	}
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%lld\n", dominoes[n]);//无理错误：格式字符对应变量应是同一类型！
	}
	return 0;
}