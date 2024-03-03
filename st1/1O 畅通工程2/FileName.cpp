#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

int set[101];

using namespace std;

struct road {
	int st, en;
	int cost;
}a[5051];

bool cmp(road a, road b)
{
	return a.cost < b.cost;
}

void init()
{
	for (int i = 1; i <= 100; i++)
		set[i] = i;
}

int findx(int x)
{
	int r = x;
	while (set[r] != r)
		r = set[r];
	return r;
}

void merge(int x, int y)
{
	int fx = findx(x);
	int fy = findx(y);
	if (fx != fy)
		set[fx] = fy;
}

int main()
{
	int N,M;
	while (scanf("%d %d", &N,&M), N)
	{
		init();
		for (int i = 1; i <= N; i++)
		{
			scanf("%d %d %d", &a[i].st, &a[i].en, &a[i].cost);
		}
		sort(a + 1, a + 1 + N, cmp);
		int sum = 0;
		int determine = 0;
		for (int i = 1; i <= N; i++)
		{
			if (findx(a[i].st) != findx(a[i].en))
			{
				merge(a[i].st, a[i].en);
				sum += a[i].cost;
				determine++;
			}
		}
		if (determine < M - 1)
		{
			printf("?\n");
			continue;

		}
		printf("%d\n", sum);
	}
	return 0;
}