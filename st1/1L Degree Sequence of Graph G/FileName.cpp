#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(int x, int y)
{
	return x > y;
}

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int n;
		int a[1001] = { 0 };
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a + 1, a + 1 + n, cmp);
		while(a[1]!=0)
		{
			if (a[1] > n - 1)
			{
				printf("no\n");
				goto done;
			}
			for (int i = 2;i<a[1]+2; i++)//变量尽量少
			{
				a[i]--;
				if (a[i] < 0)
				{
					printf("no\n");
					goto done;
				}
			}
			a[1] = 0;
			sort(a + 1, a + 1 + n, cmp);
		}
		printf("yes\n");
	done:;
	}

	return 0;
}