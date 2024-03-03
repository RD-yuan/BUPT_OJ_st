#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
double F(double x)
{
	return 8 * pow(x, 4) + 7 * pow(x, 3) + 2 * x * x + 3 * x + 6;
}
int main()
{
	int T;
	double Begin, End, Middle,an;
	double Y;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf", &Y);
		if (Y>=F(0) && Y<=F(100))
		{
			Begin = 0;
			End = 100;
			while (End-Begin > 1e-7)
			{
				Middle = (Begin + End) / 2.0;
				an = F(Middle);
				if (an>Y)
					End= Middle - 1e-7;
				else
					Begin = Middle + 1e-7;
			}
			printf("%.4lf\n", (Begin+End)/2);
		}
		else
		{
			printf("No solution!\n");
		}
	}
	return 0;
}




//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//double fun(double x)
//{
//	return 8 * pow(x, 4) + 7 * pow(x, 3) + 2 * pow(x, 2) + 3 * x + 6;
//}
//int main()
//{
//	double y, low, high, mid, answer;
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		cin >> y;
//		if (y >= fun(0) && y <= fun(100))
//		{
//			low = 0;
//			high = 100;
//			while (high - low > 1e-7)
//			{
//				mid = (low + high) / 2.0;
//				answer = fun(mid);
//				if (answer > y)
//					high = mid - 1e-7;
//				else
//					low = mid + 1e-7;
//			}
//			printf("%.4f\n", (low + high) / 2);
//		}
//		else
//			cout << "No solution!" << endl;
//	}
//	return 0;
//}
//解方程另解