#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <algorithm>

using namespace std;

struct tt {
	int start;
	int end;
}tv[100];

bool cmp(tt x, tt y)//������󣺱������Ʋ��������ֿ�ͷ��
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
		int an = 0;//��������
		for (int j = 0, temp = 0; j < n;j++)
		{
			if (tv[j].start >= temp)//�߼��������ｫ��Ŀ�Ľ���ʱ����temp�Ƚ���
			{
				an++;
				temp = tv[j].end;
			}
		}
		printf("%d\n", an);//������󣺻��У�
	}

	return 0;
}