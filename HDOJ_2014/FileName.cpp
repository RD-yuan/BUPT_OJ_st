#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

float a[101] = { 0. };

using namespace std;

int main()
{
	int N;
	while (scanf("%d", &N)!=EOF)
	{
		for (int i = 0; i < N; i++) 
		{
			scanf("%f", &a[i]);
		}
		sort(a, a + N);
		float sum = 0;//无理错误：数据类型！！！  //int sum = 0;
		for (int j = 1; j < N-1; j++)
		{
			sum = sum + a[j];
		}
		printf("%.2f\n", sum / (N-2));
	}
	return 0;
}