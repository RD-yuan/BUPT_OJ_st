#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>
using namespace std;
struct cat {
	int j, f;
	double unit;
}a[1000];
bool cmp(cat x, cat y)
{
	return x.unit > y.unit;
}
int main()
{
	int M, N, O;
	while (scanf("%d %d", &M, &N))
	{
		if (M == -1 && N == -1)
			break;
		for(int i=1;i<=N;i++)
		{ 
			scanf("%d %d", &a[i].j, &a[i].f);
			a[i].unit =a[i].j*1.0/a[i].f ;
		}
		sort(a + 1, a + 1 + N,cmp);
		double an = 0;
		for (int i = 1; i <= N; i++)
		{
			if (M >= a[i].f)
			{
				M = M - a[i].f;
				an = an + a[i].j;
			}
			else
			{
				an = an + M * a[i].unit;
				break;
			}
		}
		printf("%.3lf\n", an);
	}
	return 0;
}