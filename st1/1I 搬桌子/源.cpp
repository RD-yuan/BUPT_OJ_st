#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int T;
	int corridor[201] = { 0 };//无理错误：忘记初始化数组
	scanf("%d", &T);
	while (T--)
	{
		int N;
		scanf("%d", &N);
		for (int i = 1; i <= N; i++)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			a = (a + 1) / 2;
			b = (b + 1) / 2;
			if (a > b)
			{
				a = a ^ b;
				b = a ^ b;
				a = a ^ b;
			}
			for (; a <= b; a++)//算法错误：为啥加=就能AC？
			{
				corridor[a]++;
			}
		}
		sort(corridor + 1, corridor + 201, cmp);
		printf("%d\n", corridor[1]*10);
		for (int j = 1; j <= 200; j++)
			corridor[j] = 0;
	}

	return 0;
}