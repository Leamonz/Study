#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//海伦公式
//int judge(int a, int b, int c)
//{
//	if ((a + b > c) && (a - b < c))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	int a, b, c;
//	float S = 0;
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		int ret = judge(a, b, c);
//		if (ret == 1)
//		{
//			S = (1.0 / 4.0) * sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a));
//			printf("S = %.2f\n", S);
//		}
//		else
//		{
//			printf("Failed\n");
//			continue;
//		}
//	}
//	return 0;
//}


//求和
//double fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int m, n;
//	printf("n = ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		float sum = 0;
//		scanf("%d", &m);
//		for (int j = 1; j <= m; j++)
//		{
//			sum = sum + fib(j) / (fib(j + 1) * 1.0);
//		}
//		printf("sum = %.2f\n", sum);
//	}
//	return 0;
//}

//判断是一年的第几天
//int is_prime_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400) == 0)
//		return 1;
//	else
//		return 0;
//}
//int count_day1(int year, int month, int day)
//{
//	int i31 = 0;
//	int i30 = 0;
//	int i29 = 0;
//	for (int j = month - 1; j >= 1; j--)
//	{
//		switch (j)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			i31++;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			i30++;
//			break;
//		case 2:
//			i29++;
//			break;
//		default:
//			break;
//		}
//	}
//	return i31 * 31 + i30 * 30 + i29 * 29 + day;
//}int count_day2(int year, int month, int day)
//{
//	int i31 = 0;
//	int i30 = 0;
//	int i28 = 0;
//	for (int j = month - 1; j >= 1; j--)
//	{
//		switch (j)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			i31++;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			i30++;
//			break;
//		case 2:
//			i28++;
//			break;
//		default:
//			break;
//		}
//	}
//	return i31 * 31 + i30 * 30 + i28 * 28 + day;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	int year, month, day;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &year, &month, &day);
//		int ret = is_prime_year(year);
//		switch (ret)
//		{
//		case 1:
//			count = count_day1(year, month, day);//如果是闰年
//			break;
//		case 0:
//			count = count_day2(year, month, day);//如果不是闰年
//			break;
//		default:
//			break;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}


//字符串逆序
//void reverse_string(char ch[])
//{
//	int left = 0;
//	int right = strlen(ch) - 1;
//	char tmp = ch[left];
//	ch[left] = ch[right];
//	ch[right] = '\0';
//	if (strlen(ch + 1) > 1)
//	{
//		reverse_string(ch + 1);
//	}
//	ch[right] = tmp;
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	char ch[100] = "";
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &ch);
//		int left = 0;
//		int right = strlen(ch) - 1;
//		reverse_string(ch);
//		printf("%s\n", ch);
//	}
//	return 0;
//}


//void reverse_string(char* str)
//{
//	int num = strlen(str);
//	for (int i = num - 1; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	char str[20] = "";
//	scanf("%s", str);
//	reverse_string(str);
//	return 0;
//}


//质因数分解
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	if (i > sqrt(n))
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	int k = 2;
//	for (int i = 0; i < n; i++)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("%d\n", input);
//			continue;
//		}
//		for (k = 2; k <= input; k++)
//		{
//			if (input == k)
//			{
//				printf("%d\n", k);
//				break;
//			}
//			if ((input % k == 0) && (is_prime(k) == 1))
//			{
//				printf("%d*", k);
//				input = input / k;
//			}
//		}
//	}
//	return 0;
//}

//第k大的数
//void bubble_sort(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n - i - 1; j++)
//		{
//			if (arr[j + 1] < arr[j])
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
//	int arr[100] = { 0 };
//	int n, k;
//	scanf("%d %d", &n, &k);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, n);
//	printf("%d\n", arr[k - 1]);
//	return 0;
//}


//unsigned int Fibon(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//	{
//		int f1 = 1;
//		int f2 = 2;
//		int f3 = 0;
//		for (int i = 0; i < n - 2; i++)
//		{
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//		return f3;
//	}
//}
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		float value;
//		int j, m;
//		scanf("%d", &m);
//		for (j = 1, value = 0.0; j <= m; j++)
//		{
//			value = value + (Fibon(j) * 1.0) / (Fibon(j + 1) * 1.0);
//		}
//		printf("%.2f\n", value);
//	}
//	return 0;
//}
