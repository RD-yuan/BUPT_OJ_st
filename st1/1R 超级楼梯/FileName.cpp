#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int stairs(int M)
{
	if (M >= 3)
		return stairs(M - 1) + stairs(M - 2);
	if (M == 2)
		return 2;//无理错误：上两节台阶有两种走法！
	if (M == 1)
		return 1;
}

int main()
{
	int N, M;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &M);
		printf("%d\n", stairs(M));
	}
	return 0;
}