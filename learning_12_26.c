#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	long long x, n;
//	scanf("%lld%lld", &x, &n);
//	long long sum = 1;
//	for (long long i = 0; i < n; i++)
//	{
//		sum = sum + sum * x;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int fun(int* p)
//{
//	return *p;
//}
//int main()
//{
//	int x = 6;
//	int* p = &x;
//	printf("%d\n", fun(p));
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	a = 1; b = 2;
//	c = (a % b < 1) || (a / b > 1);
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int arr[1000];
//void sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[j]);
//		}
//		sort(arr, m);
//		for (int i = 0; i < m; i++)
//		{
//			if (i == 0)
//				printf("%d ", arr[i]);
//			else
//			{
//				if (arr[i] == arr[i - 1])
//					continue;
//				else
//					printf("%d ", arr[i]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//long long fact(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fact(n - 1);
//}
//long long fact_sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return fact(n) + fact_sum(n - 1);
//}
//int main()
//{
//	int k, n;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d", &n);
//		long long sum = fact_sum(n);
//		long long output = sum % 1000000;
//		printf("%lld\n", output);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//char arr[1000] = { 0 };
//int main()
//{
//	scanf("%s", &arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	printf("%d\n", '\r');
//	return 0;
//}

//计算a/b
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int c;
//		double a, b;
//		scanf("%lf%lf%d", &a, &b, &c);
//		printf("%.*lf\n", c, a / b);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, a, b, c;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (a % b == 0)
//		{
//			printf("%d.", a / b);
//			for (int j = 0; j < c; j++)
//				printf("%d", 0);
//		}
//		else
//		{
//			printf("%d.", a / b);
//			int tmp = a % 10;
//			int bit = 0;
//			for (int j = 0; j < c; j++)
//			{
//				bit = (tmp * 10) / b;
//				if (j == c - 1)
//				{
//					tmp = tmp * 10 - b * bit;
//					int t = (tmp * 10) / b;
//					if (t >= 5)
//						bit += 1;
//				}//四舍五入，只在计算最后一位时考虑
//				if (bit > 9)
//					printf("%d", 9);
//				else
//					printf("%d", bit);
//				tmp = tmp * 10 - b * bit;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
