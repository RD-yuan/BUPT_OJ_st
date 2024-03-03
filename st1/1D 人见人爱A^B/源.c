#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long long fastpower(int base, int power)
{
	long long result = 1;
	while (power > 0)
	{
		if (power % 2 == 1)
			result = (result * base) % 1000;
		power /= 2;
		base = (base * base) % 1000;
	}
	return result;
}
int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF && (a != 0 || b != 0))
		printf("%lld\n", fastpower(a, b));
	return 0;
}