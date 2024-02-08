#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
double y;
double F(double x)
{
	return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * x * x - y * x;
}
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf", &y);
		double Left = 0, Right = 100;
		double LeftThird, RightThird;
		while (Right-Left>= 1e-7)
		{
			LeftThird = (Left * 2 + Right) / 3;
			RightThird = (Left + Right * 2) / 3;
			if (F(LeftThird) > F(RightThird))
				Left = LeftThird;
			else
				Right = RightThird;
		}
		printf("%.4lf\n", F((LeftThird + RightThird) / 2));
	}

	return 0;
}