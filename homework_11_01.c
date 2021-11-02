#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b, c, x;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		for (x = 1000; x <= 9999; x++)
//		{
//			if ((x % a == 0) && ((x + 1) % b) == 0 && ((x + 2) % c) == 0)
//			{
//				printf("%d\n", x);
//				break;
//			}
//		}
//		if (x == 10000)
//		{
//			printf("Impossible\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int T = 0;
//	int n = 0;
//	printf("T = ");
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int count = 0;
//		printf("n = ");
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			printf("%d\n", 1);
//			continue;
//		}
//		while (n != 0)
//		{
//			n = n / 10;
//			count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}


//int main()
//{
//	int row = 9;
//	for (int i = 1; i <= row; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int steps(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return steps(n - 1) + steps(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int stair = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("stair = ");
//		scanf("%d", &stair);
//		printf("%d\n", steps(stair));
//	}
//	return 0;
//}


//int sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + sum(n - 1);
//}
//int main()
//{
//	int m = 0;
//	printf("m = ");
//	scanf("%d", &m);
//	int input = 0;
//	int count = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		do
//		{
//			scanf("%d", &input);
//			count++;
//			sum1 = sum1 + input;
//		} while (input != 0);
//		sum2 = sum(count);
//		int ret = sum2 - sum1;
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int x = 0;
//	int y = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("ÊäÈëx,y:");
//		scanf("%d %d", &x, &y);
//		int a, b, c;
//		for (a = 0; a <= 100; a++)
//		{
//			for (b = 0;b <= 100; b++)
//			{
//				for (c = 0;c <= 100; c++)
//				{
//					if ((3 * a + 2 * b + 1 * c == y) && (a + b + c == x))
//					{
//						printf("%d %d %d\n", a, b, c);
//						continue;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

