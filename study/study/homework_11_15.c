#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//数列判断
//int is_Ari(int* arr)
//{
//	int d = *(arr + 1) - *arr;
//	int flag = 1;
//	if (d == 0)
//		return 0;
//	for (int i = 1; i <= 3; i++)
//	{
//		if (*(arr + i + 1) - *(arr + i) == d)
//			continue;
//		else
//			return 0;
//	}
//	if (flag == 1)
//		return 1;
//}
//int is_Geo(int* arr)
//{
//	int q = *(arr + 1) / *arr;
//	int flag = 1;
//	for (int i = 1; i <= 3; i++)
//	{
//		if (*(arr + i + 1) / *(arr + i) == q)
//			continue;
//		else
//			return 0;
//	}
//	if (flag == 1)
//		return 1;
//}
//int is_Fib(int* arr)
//{
//	int flag = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		if (*(arr + i) + *(arr + i + 1) == *(arr + i + 2))
//			continue;
//		else
//			return 0;
//	}
//	if (flag == 1)
//		return 1;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int n = 0;
//	int sum = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[j]);
//			sum += arr[j];
//		}
//		if (sum == 0)
//		{
//			printf("End Of Input\n");
//			break;
//		}
//		if (is_Ari(&arr) == 1)
//		{
//			printf("Arithmetic Progression\n");
//			continue;
//		}
//		if (is_Geo(&arr) == 1)
//		{
//			printf("Geometric Progression\n");
//			continue;
//		}
//		if (is_Fib(&arr) == 1)
//		{
//			printf("Fibonacci Sequence\n");
//			continue;
//		}
//		printf("Input Error\n");
//	}
//	return 0;
//}

//勒让多德多项式
//float LRDD(int n, float x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else
//		return ((2 * n - 1) * x * LRDD(n - 1, x) - (n - 1) * LRDD(n - 2, x) * x) / (n * 1.0);
//}
//int main()
//{
//	int T = 0;
//	int n = 0;
//	float x = 0;
//	printf("T = ");
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		scanf("%d %f", &n, &x);
//		if (n < 0)
//			printf("Input Error\n");
//		else
//			printf("%.6f\n", LRDD(n, x));
//	}
//}

//不大于n的素数
//int is_prime(int x)//判断是否为素数
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//		else
//			continue;
//	}
//	return 1;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("m = ");
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		int count = 0;
//		int p = 0;
//		int arr[1000] = { 0 };
//		scanf("%d", &n);
//		if (n < 2)
//		{
//			printf("Input Error\n");
//			continue;
//		}
//		else
//		{
//			for (int j = 2; j <= n; j++)
//			{
//				if (is_prime(j) == 1)
//				{
//					count++;
//					arr[p] = j;
//					p++;
//				}
//				if ((count > 100))
//				{
//					printf("Overflow\n");
//					break;
//				}
//			}
//			if (count <= 100)
//			{
//				for (int k = 0; k < count; k++)
//				{
//					if (k == count - 1)
//					{
//						printf("%d", arr[k]);
//						continue;
//					}
//					printf("%d,", arr[k]);
//				}
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//n个数的第k个
//int main()
//{
//	int n = 0;
//	int x = 0;
//	again:
//	do
//	{
//		int arr[100] = { 0 };
//		scanf("%d %d", &n, &x);
//		if (n == 0)
//		{
//			printf("End Of Input\n");
//			break;
//		}//n为0时结束
//		if (n < 0)
//		{
//			printf("Input Error\n");
//			continue;
//		}//n不合题意
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			for (int j = 0; j < i; j++)
//			{
//				if (arr[j] == arr[i])
//				{
//					printf("Input Error\n");
//					goto again;
//				}
//			}//有重复数字
//		}
//		for (int t = 0; t < n; t++)
//		{
//			if (arr[t] == x)
//			{
//				printf("%d\n", t + 1);
//				break;
//			}
//			else
//				continue;
//		}
//	} while (n);
//	return 0;
//}

//回文数
//void four_bits(int input)
//{
//	for (int j = input;; j++)
//	{
//		int a = j % 10;//个位
//		int b = (j / 10) % 10;//十位
//		int c = (j / 100) % 10;//百位
//		int d = (j / 1000) % 10;//千位
//		if (a * 1000 + b * 100 + c * 10 + d == j)
//		{
//			printf("%d\n", j);
//			break;
//		}
//	}
//}void three_bits(int input)
//{
//	for (int j = input;; j++)
//	{
//		int a = j % 10;//个位
//		int b = (j / 10) % 10;//十位
//		int c = (j / 100) % 10;//百位
//		if (a * 100 + b * 10 + c == j)
//		{
//			printf("%d\n", j);
//			break;
//		}
//	}
//}void two_bits(int input)
//{
//	for (int j = input;; j++)
//	{
//		int a = j % 10;//个位
//		int b = (j / 10) % 10;//十位
//		if (a * 10 + b == j)
//		{
//			printf("%d\n", j);
//			break;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int input = 0;
//		scanf("%d", &input);//input>=10
//		if (input >= 1000)
//			four_bits(input);
//		else if (input >= 100 && input <= 999)
//			three_bits(input);
//		else
//			two_bits(input);
//	}
//	return 0;
//}

//罗马数字
//void printge(int c)
//{
//	if (c < 5)
//	{
//		if (c == 4)
//			printf("IV");
//		else
//		{
//			for (int i = c; i > 0; i--)
//			{
//				printf("I");
//			}
//		}
//	}
//	else
//	{
//		if (c == 5)
//			printf("V");
//		else if (c == 9)
//			printf("IX");
//		else
//		{
//			printf("V");
//			for (int i = c - 5; i > 0; i--)
//			{
//				printf("I");
//			}
//		}
//	}
//}
//void printshi(int b)
//{
//	if (b < 50)
//	{
//		if (b == 40)
//			printf("XL");
//		else
//		{
//			for (int i = b/10; i > 0; i--)
//			{
//				printf("X");
//			}
//		}
//	}
//	else
//	{
//		if (b == 50)
//			printf("L");
//		else if (b == 90)
//			printf("XC");
//		else
//		{
//			printf("L");
//			for (int i = (b - 50)/10; i > 0; i--)
//			{
//				printf("X");
//			}
//		}
//	}
//}
//void printbai(int a)
//{
//	if (a < 500)
//	{
//		if (a == 400)
//			printf("CD");
//		else
//		{
//			for (int i = a/100; i > 0; i--)
//			{
//				printf("C");
//			}
//		}
//	}
//	else
//	{
//		if (a == 500)
//			printf("D");
//		else if (a == 900)
//			printf("CM");
//		else
//		{
//			printf("D");
//			for (int i = (a - 500)/100; i > 0; i--)
//			{
//				printf("C");
//			}
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("End Of Input\n");
//			break;
//		}
//		else if (input < 0)
//		{
//			printf("Input Error\n");
//			continue;
//		}
//		else
//		{
//			int a = input - input % 100;//百
//			int b = input % 100 - input % 10;//十
//			int c = input % 10;//个
//			printbai(a);
//			printshi(b);
//			printge(c);
//			printf("\n");
//		}
//	} while (input);
//	return 0;
//}

//int main(void)
//{
//	int i, m, n, j, k;
//	int arr[100] = { 0 };
//	scanf("%d", &m);
//	for (i = 0;i < m;i++)
//	{
//		scanf("%d", &n);
//		for (j = 0,k = 0;n % 10 != 0;j++)
//		{
//			arr[j] = n % 10;
//			n = n / 10;
//			k++;
//		}
//		/*printf("%d", k);*/
//
//		if (k % 2 == 0)
//		{
//			int p = k;
//			if (arr[p / 2] > arr[p / 2 - 1])
//			{
//				int q = k;
//				for (int a = 0;a < k / 2;a++)
//				{
//					printf("%d", arr[q - 1]);
//					q--;
//				}
//				for (int b = 0;b < k / 2;b++)
//				{
//					printf("%d", arr[q]);
//					q++;
//				}
//			}
//			else
//			{
//				int s = k;
//				for (int c = 1;c < k / 2;c++)
//				{
//					printf("%d", arr[s - 1]);
//					s--;
//				}
//				printf("%d%d", arr[s - 1] + 1, arr[s - 1] + 1);
//				for (int d = 1;d < k / 2;d++)
//				{
//					printf("%d", arr[s]);
//					s++;
//				}
//			}
//				
//		}
//		else if (k % 2 != 0)
//		{
//			int u = k;
//			for (int e = 0;e < k / 2;e++)
//			{
//				printf("%d", arr[u - 1]);
//				u--;
//			}
//			printf("%d", arr[u - 1] + 1);
//			for (int f = 0;f < k / 2;f++)
//			{
//				printf("%d", arr[u]);
//				u++;
//			}
//		}
//
//	}
//	return 0;
//}