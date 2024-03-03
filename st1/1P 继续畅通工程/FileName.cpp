#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

int set[101];

using namespace std;

struct road {
	int st, en;
	int cost,ed;
}a[5051];

bool cmp(road a, road b)
{
	if (a.ed != b.ed) return a.ed > b.ed;
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
	int N;
	while (scanf("%d", &N), N)
	{
		init();
		int O = N * (N - 1) / 2;
		for (int i = 1; i <= O; i++)
		{
			scanf("%d %d %d %d", &a[i].st, &a[i].en, &a[i].cost, &a[i].ed);
		}
		sort(a + 1, a + 1 + O, cmp);
		int sum = 0;
		for (int i = 1; i <= O; i++)
		{
			if (findx(a[i].st) != findx(a[i].en))
			{
				merge(a[i].st, a[i].en);
				if (a[i].ed == 0)//无理错误：赋值（=）和等号（==）！
					sum += a[i].cost;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}