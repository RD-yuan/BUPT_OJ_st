#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>//PS：VC好像不支持万能头文件。。。
using namespace std;
int GCD(int a, int b)//欧几里得算法
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
//优化算法：找循环节
int superpower(int a, int b)//快速幂运算（递归）
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
int power(int a, int b)//快速幂运算（循环）
{
	int ans = 1;
	while (b)
	{
		if (b % 2) ans *= a;
		a = a * a;
		b = b / 2;
	}
	return ans;
}//快速幂运算一般在乘法会取模
int BiSearch(int a[], int n, int x)//二分查找（循环）
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
int Search(int a[], int x, int left, int right)//二分查找（递归）
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
}//二分查找时间复杂度：O(logN)
	/*
	三分查找
	(二分查找单调性，三分查找凹凸性(不要求可导)）
	某函数有一极值，找极值点.
	LeftThird=(Left*2+Right)/3;
	RightThird=(Left+Right*2)/3;
	比较二者.
	*/
//整型除法向上取整：被除数+除数-1.
//贪心算法
//可图性判定！
/* sort函数 sort(a,a+10,cmp)
左闭右开区间[a[0],a[10])*/
/*并查集(Disjoint Set) 不相交集合.
* 常见操作：合并两个集合；查找某个元素属于哪个集合.
*/