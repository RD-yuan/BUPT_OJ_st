#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int a[100001],yo[100001];

using namespace std;

void init()
{
	for (int i = 0; i <= 100000; i++)
	{
		a[i] = i;
		yo[i] = 0;//前解：yo[100001]={0} 有误！缓冲区溢出！
	}
}

int findx(int x)
{
	int r = x;
	while (a[r] != r)
		r = a[r];
	return r;
}

void merge(int x, int y)
{
	int fx = findx(x);
	int fy = findx(y);
	if (fx != fy)
		a[fx] = fy;
}

int main()
{
	int A, B;
	while (scanf("%d%d", &A, &B))
	{
		if (A == -1 && B == -1)
			break;
		init();
		int determine = 0;
		while (1)
		{
			if (A == 0 && B == 0)
				break;
			if (findx(A) == findx(B))
				determine = 1;
			merge(A, B);
			yo[A] = 1;
			yo[B] = 1;
			scanf("%d%d", &A, &B);
		}
		if (determine == 1)
		{
			printf("No\n");
		}
		else
		{
			int sum = 0;
			for (int i = 0; i <= 100000; i++)
			{
				if (yo[i] == 1 && a[i] == i)
					sum++;
			}
			if (sum > 1)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}

	return 0;
}