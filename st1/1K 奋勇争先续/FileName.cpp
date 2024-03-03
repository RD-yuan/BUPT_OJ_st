#define _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
#include <stdio.h>

using namespace std;

struct student {
	char name[11];
	int solution;
	int time;
}dat[1001];

bool cmp(student a, student b)
{
	if (a.solution == b.solution) return a.time < b.time;
	return a.solution > b.solution;
}

int main()
{
	int C;
	scanf("%d", &C);
	while (C--)
	{
		int N, M;
		scanf("%d %d", &N, &M);
		for (int i = 0; i < N; i++)
		{
			scanf("%s %d %d", dat[i].name, &dat[i].solution, &dat[i].time);
		}
		sort(dat, dat + N, cmp);
		for (int j = 0; j < M; j++)
		{
			printf("%s %d %d\n", dat[j].name, dat[j].solution, dat[j].time);//无理错误：加了&位运算符，不能偷懒！
		}
		printf("\n");
	}
	return 0;
}