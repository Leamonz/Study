#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int input = 0;
//	int a, b, c;//百位，十位，个位
//	printf("n = ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("input = ");
//		scanf("%d", &input);
//		if ((input > 99) && (input < 1000))
//		{
//			a = input / 100;
//			b = (input - a * 100) / 10;
//			c = input % 10;
//			printf("%d,%d,%d\n", c, b, a);
//		}
//		else
//			printf("illegal\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int year = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("year = ");
//		scanf("%d", &year);
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//			printf("yes\n");
//		else
//			printf("no\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int T = 0;
//	int i = 0;
//	printf("T = ");
//	scanf("%d", &T);
//	for (i = 0; i < T; i++)
//	{
//		int j = 0;//外循环变量
//		int k = 0;//内循环变量
//		int n = 0;//最大值
//		int a = 0;//要进行判断的数字
//		printf("\nn(20 <= n <= 100) = ");
//		scanf("%d", &n);
//		for (j = 2; j <= n; j++)
//		{
//			for (k = 2; k <= sqrt(j); k++)
//			{
//				if (j % k == 0)
//					break;
//			}
//			if (k > sqrt(j))
//				printf("%d ", j);
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[] = { 0 };
//	printf("n = ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int a = 0;//十进制正整数
//		int b = 0;//基数
//		int j = 0;//循环变量，数组下标
//		printf("请输入a(1 <= a <= 100000),b(2 <= b <= 10):");
//		scanf("%d %d", &a, &b);
//		while (a != 0)
//		{
//			arr[j] = a % b;
//			a = a / b;
//			if (a != 0)
//				j++;
//		}
//		for (; j >= 0; j--)
//		{
//			printf("%d", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

//unsigned long long int Pow(int m, int n)
//{
//	if (n == 1)
//		return m;
//	else
//		return m * Pow(m, n - 1);
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a, b, c;
//	int j = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入a,b,c：");
//		scanf("%d %d %d", &a, &b, &c);
//		printf("%d.", a / b);
//		for (j = 1; j < c; j++)
//		{
//			printf("%llu", ((a * Pow(10, j)) / b)%10);
//		}
//		if (((a * Pow(10, j + 1))/b)%10 > 4)//error
//		{
//			printf("%llu", ((a * Pow(10, j)) / b)%10 + 1);
//		}
//		else
//		{
//			printf("%llu", ((a * Pow(10, j)) / b)%10 );
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//int min(int m, int n)
//{
//	return m < n ? m : n;
//}
//int max(int m, int n)
//{
//	return m > n ? m : n;
//}
//int main()
//{
//	int T = 0;
//	int i = 0;
//	printf("T = ");
//	scanf("%d", &T);
//	for (i = 0; i < T; i++)
//	{
//		int m, n;
//		printf("请输入m,n：");
//		scanf("%d %d", &m, &n);
//		int c = min(m, n);
//		for (;;)
//		{
//			if ((m % c == 0) && (n % c == 0))
//				break;
//			else
//			{
//				c = max(m, n) % c;
//			}
//		}
//		printf("最大公约数是：%d\n", c);
//	}
//	return 0;
//}


//int main()
//{
//	int T, i, n, a, c, b;
//
//	scanf("%d", &T);
//	for (i = 0; i < T; i++)
//	{
//		scanf("%d", &n);//20<=n<=100 
//		for (c = 2; c <= n; c++)//要输出的数 
//		{
//			for (a = 2; a < c ; a++)//约数 
//			{
//				if (c % a == 0)
//					break;
//			}
//			if (a >= c)
//			{
//				printf("%d ", c);
//			}
//		}
//	}
//	return 0;
//}


//int main(void)
//{
//	int i, T;
//	scanf("%d", &T);
//	for (i = 0; i < T; i++)
//	{
//		int a, b, c;
//		scanf("%d %d", &a, &b);
//		if (a < b)
//		{
//			do
//			{
//				c = a;
//				if ((a % c == 0) && (b % c == 0))
//				{
//					printf("%d", c);
//				}
//				c = b % c;
//				if ((a % c == 0) && (b % c == 0))
//				{
//					printf("%d", c);
//				}
//			} while ((a % c != 0) || (b % c != 0));
//			printf("\n");
//		}
//		else if (a > b)
//		{
//			do
//			{
//				c = b;
//				if ((a % c == 0) && (b % c == 0))
//				{
//					printf("%d", c);
//				}
//				c = a % c;
//				if ((a % c == 0) && (b % c == 0))
//				{
//					printf("%d", c);
//				}
//			} while ((a % c != 0) || (b % c != 0));
//			printf("\n");
//		}
//	}
//	return 0;
//}