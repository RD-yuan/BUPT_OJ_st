#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>//PS��VC����֧������ͷ�ļ�������
using namespace std;
int GCD(int a, int b)//ŷ������㷨
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
//�Ż��㷨����ѭ����
int superpower(int a, int b)//���������㣨�ݹ飩
{
	int ans;
	if (b == 0)
		ans = 1;
	else
	{
		ans = superpower(a * a, b / 2);
		if (b % 2 == 1)
			ans *= a;
	}
	return ans;
}
int power(int a, int b)//���������㣨ѭ����
{
	int ans = 1;
	while (b)
	{
		if (b % 2) ans *= a;
		a = a * a;
		b = b / 2;
	}
	return ans;
}//����������һ���ڳ˷���ȡģ
int BiSearch(int a[], int n, int x)//���ֲ��ң�ѭ����
{
	int left = 0, right = n - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (a[middle] == x)
			return middle;
		if (x > a[middle])
			left = middle + 1;
		else
			right = middle - 1;
	}
	return -1;
}
int Search(int a[], int x, int left, int right)//���ֲ��ң��ݹ飩
{
	if (left > right)
		return -1;
	else
	{
		int mid = (left + right) / 2;
		if (a[mid] == x)
			return mid;
		else if (x > a[mid])
			return Search(a, x, mid + 1, right);
		else
			return Search(a, x, left, mid - 1);
	}
}//���ֲ���ʱ�临�Ӷȣ�O(logN)
	/*
	���ֲ���
	(���ֲ��ҵ����ԣ����ֲ��Ұ�͹��(��Ҫ��ɵ�)��
	ĳ������һ��ֵ���Ҽ�ֵ��.
	LeftThird=(Left*2+Right)/3;
	RightThird=(Left+Right*2)/3;
	�Ƚ϶���.
	*/
//���ͳ�������ȡ����������+����-1.
//̰���㷨
//��ͼ���ж���
/* sort���� sort(a,a+10,cmp)
����ҿ�����[a[0],a[10])*/
/*���鼯(Disjoint Set) ���ཻ����.
* �����������ϲ��������ϣ�����ĳ��Ԫ�������ĸ�����.
*/