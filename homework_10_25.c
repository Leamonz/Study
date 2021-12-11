#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		unsigned int a = 0;
//		printf("a = ");
//		scanf("%d", &a);
//		int count = 0;
//		while (a)
//		{
//			if (a % 2 == 1)
//				count++;
//			a = a / 2;
//		}
//		printf("1的个数为：%d\n", count);
//	}
//	return 0;
//}


//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int T = 0;//循环次数
//	printf("T = ");
//	scanf("%d", &T);
//	int i = 0;
//	int n = 0;//第n个斐波那契数
//	for (i = 0; i < T; i++)
//	{
//		printf("n = ");
//		scanf("%d", &n);
//		printf("余数为：%d\n", fib(n) % 10007);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int input = 0;
//	int j = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("input = ");
//		scanf("%d", &input);
//		for (j = 2; j <= sqrt(input); j++)
//		{
//			if (input % j == 0)
//				break;
//			else
//				continue;
//		}
//		if (j > sqrt(input))
//			printf("yes\n");
//		else
//			printf("no\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[6] = { 0 };
//	int arr2[5] = { 0 };
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int m = 0;
//	printf("input = ");
//	scanf("%d", &input);
//	for (i = 1; i < 10; i++)
//	{
//		arr1[0] = arr1[5] = i;
//		for (j = 0; j < 10; j++)
//		{
//			arr1[1] = arr1[4] = j;
//			for (k = 0; k < 10; k++)
//			{
//				arr1[2] = arr1[3] = k;
//				if (input == i * 2 + j * 2 + k * 2)
//				{
//					for (m = 0; m < 6; m++)
//					{
//						printf("%d", arr1[m]);
//					}
//					printf("\n");
//				}
//			}
//		}
//	}for (i = 1; i < 10; i++)
//	{
//		arr2[0] = arr2[4] = i;
//		for (j = 0; j < 10; j++)
//		{
//			arr2[1] = arr2[3] = j;
//			for (k = 0; k < 10; k++)
//			{
//				arr2[2] = k;
//				if (input == i * 2 + j * 2 + k)
//				{
//					for (m = 0; m < 5; m++)
//					{
//						printf("%d", arr2[m]);
//					}
//					printf("\n");
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		char ch = 0;
//		printf("输入字符：");
//		scanf("%c", &ch);
//		getchar();
//		if (ch >= '0' && ch <= '9')
//			printf("number\n");
//		else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("letter\n");
//		else
//			printf("else\n");
//	}
//	return 0;
//}


//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int n, a, b, j;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("请输入糖果数量a,b:");
//		scanf("%d,%d", &a, &b);
//		for (j = a * b - 1; j > max(a, b); j--)
//		{
//			int p = 0;
//			for (int x = 0; x < 50; x++)
//			{
//				for (int y = 0; y < 50; y++)
//				{
//					if (a * x + b * y == j)
//						p++;
//				}
//			}
//			if (p == 0)
//			{
//				printf("最大不能被组合数为%d\n", j);
//				break;
//			}
//		}
//	}
//	return 0;
//}

