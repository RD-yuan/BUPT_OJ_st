#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fibonacci(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	if (n >= 2)
		return (Fibonacci(n - 1) + Fibonacci(n - 2))%3;
}
int main()
{
	int n,m;
	while (scanf("%d", &n) == 1)
	{
		n =n%8;
		if (n==2||n==6)
			printf("yes\n");
		else
			printf("no\n");
	}
		return 0;
}