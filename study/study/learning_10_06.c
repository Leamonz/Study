#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
//计算一个二进制数中1的个数
//int count_one(unsigned int a)
//{
//	/*int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//		if (a == 0)
//		{
//			return count;
//		}
//	}
//	return count;*/
//	/*int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//		if ((a >> i) == 0)
//		{
//			return count;
//		}
//	}
//	return count;*/
//	/*int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		a = a & (a - 1);
//		count++;
//		if (a == 0)
//		{
//			return count;
//		}
//	}
//	return count;*/
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("count = %d\n", count_one(a));
//	return 0;
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//int Fun(int a)
//{
//	if (a == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * Fun(a + 1);
//	}
//}
//int main()
//{
//	printf("%d\n", Fun(2));
//	return 0;
//}
//写一个函数用来打印100-200之间的素数
//void print_prime()
//{
//	int i = 100;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//			else
//				continue;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//}
//int main()
//{
//	print_prime();
//	return 0;
//}
//写一个函数判断year是不是闰年
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400) == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else if (ret == 0)
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}
//写一个函数，打印乘法口诀表，行数和列数由自己决定
//void print(int num)
//{
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;//行和列
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//利用递归打印一个数字的每一位
// 先逐层向下，达到限制条件后逐层回溯
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//递归求阶乘
//int fact(int n)
//{
//	if (n > 1)
//		return n * fact(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", fact(num));
//	return 0;
//}
//非递归求阶乘
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	int ret = 0;
//	for (i = 1, ret = 1; i <= num; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//递归实现strlen函数
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//非递归实现strlen函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "hello world";
//	printf("%d\n", strlen(str));
//	printf("%d\n", my_strlen(str));
//	return 0;
//}
//利用函数reverse_string将字符串的内容翻转（字符串逆序）
//非递归
//void reverse_string(char str[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//递归
//void reverse_string(char str[])
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = '\0';
//	if (my_strlen(str + 1) > 1)
//	{
//		reverse_string(str + 1);
//	}
//	str[right] = tmp;
//}
//int main()
//{
//	char str[] = "hello";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
//计算一个非负整数每位数字之和
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + Digitsum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("Digitsum = %d\n", Digitsum(n));
//	return 0;
//}
//利用递归求n的k次方
//double cal(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * cal(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (1.0 / (cal(n, -k)));
//	}
//}
//int main()
//{
//	int n = 0;//底数
//	int k = 0;//指数
//	scanf("%d%d", &n, &k);
//	printf("%.3lf\n", cal(n, k));
//	return 0;
//}
//利用递归求第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("第%d个斐波那契数是：%d", n, fib(n));
//	return 0;
//}