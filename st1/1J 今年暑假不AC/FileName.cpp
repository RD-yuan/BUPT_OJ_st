#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

using namespace std;

struct tt {
	int start;
	int end;
}tv[100];

bool cmp(tt x, tt y)//无理错误：变量名称不能以数字开头！
{
	return x.end < y.end;
}

int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d", &tv[i].start, &tv[i].end);
		}
		sort(tv, tv + n, cmp);
		int an = 0;//忘记重置
		for (int j = 0, temp = 0; j < n;j++)
		{
			if (tv[j].start >= temp)//逻辑错误：这里将节目的结束时间与temp比较了
			{
				an++;
				temp = tv[j].end;
			}
		}
		printf("%d\n", an);//无理错误：换行！
	}

	return 0;
}