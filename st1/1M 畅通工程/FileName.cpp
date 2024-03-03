#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int ch[1001];

using namespace std;

int findx(int x)
{
	int r = x;
	while (ch[r] != r)
		r = ch[r];
	return r;
}

void merge(int x, int y)
{
	int fx = findx(x);
	int fy = findx(y);
	if (fx != fy)
		ch[fx] = fy;
}

int main()
{
	int N,M;
	while (scanf("%d %d", &N,&M), N)
	{
		for (int i = 1; i <= N; i++)
		{
			ch[i] = i;
		}
		while (M--)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			merge(x, y);
		}
		int sum = -1;
		for (int i = 1; i <= N; i++)
			if (ch[i] == i)sum++;
		printf("%d\n", sum);
	}

	return 0;
}