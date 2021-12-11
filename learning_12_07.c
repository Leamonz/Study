#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Digit_sum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + Digit_sum(n / 10);
//}
//int main()
//{
//	printf("%d\n", Digit_sum(1234));
//	return 0;
//}
//#include<stdio.h>
//int bin_search(int k, int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//			return i;
//	}
//	return -1;
//}
//int check(int sub[], int sz)
//{
//	int num[1000] = { 0 };
//	int Num = 1;
//	for (int i = 0; i < sz; i++)
//	{
//		num[i] = Num;
//		Num++;
//	}//置数
//	//找数
//	for (int j = 0; j < sz; j++)
//	{
//		int position = bin_search(sub[j], num, sz);
//		if (position >= 0)
//			num[position] = 0;
//	}
//	for (int k = 0; k < sz; k++)
//	{
//		if (num[k] != 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int arr[1000] = { 0 };
//	int sub[1000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = 0;
//	for (int j = 1; j < n; j++)
//	{
//		if (arr[j] > arr[j - 1])
//			sub[j - 1] = arr[j] - arr[j - 1];
//		else
//			sub[j - 1] = arr[j - 1] - arr[j];
//		sz++;
//	}
//	int ret = check(sub, sz);
//	if (ret == 1)
//		printf("Jolly\n");
//	else
//		printf("Not jolly\n");
//	return 0;
//}
//#include<stdio.h>
//int arr[2000000] = { 0 };
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		double a = 0;
//		long long t = 0;
//		scanf("%lf %lld", &a, &t);
//		for (long long j = 0; j < t; j++)
//		{
//			long long position = (long long)(a * t);
//			arr[position] = !arr[position];
//		}
//	}
//	int flag = 1;
//	long long k = 0;
//	while (flag)
//	{
//		if (arr[k] == 1)
//			flag = 0;
//		k++;
//	}
//	printf("%lld\n", k + 1);
//	return 0;
//}
//#include<stdio.h>
//int count_2(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 10 == 2)
//			count++;
//		n /= 10;
//	}
//	return count;
//}
//int main()
//{
//	int L, R;
//	scanf("%d %d", &L, &R);
//	int count = 0;
//	for (int i = L; i <= R; i++)
//	{
//		count += count_2(i);
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char str1[7] = { 0 };//彗星
//	char str2[7] = { 0 };//小组
//	int pro1 = 1;
//	int pro2 = 1;
//	scanf("%s", &str1);
//	getchar();
//	scanf("%s", &str2);
//	getchar();
//	for (int i = 0; str1[i] != '\0'; i++)
//	{
//		pro1 *= (str1[i] - 'A' + 1);
//	}
//	for (int j = 0; str2[j] != '\0'; j++)
//	{
//		pro2 *= (str2[j] - 'A' + 1);
//	}
//	if ((pro1 % 47) == (pro2 % 47))
//		printf("GO\n");
//	else
//		printf("STAY\n");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int is_prime(long n)
//{
//	for (long i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	long N = 0;
//	scanf("%ld", &N);
//	for (long i = 4; i <= N; i++)
//	{
//		int flag = 0;
//		if (i % 2 == 0)
//		{
//			for (long x = 2; x <= 10000; x++)
//			{
//				for (long y = 2; y <= 10000; y++)
//				{
//					if ((i == x + y) && (is_prime(x) == 1) && (is_prime(y) == 1))
//					{
//						printf("%ld=%ld+%ld\n", i, x, y);
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 1)
//					break;
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int get_bit(int n)
//{
//	int bit = 0;
//	while (n)
//	{
//		n /= 10;
//		bit++;
//	}
//	return bit;
//}
//int reverse(int n, int bit)
//{
//	int arr[10] = { 0 };
//	int ret = 0;
//	for (int i = 0; i < bit; i++)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//	}
//	for (int j = 0; j < bit; j++)
//	{
//		ret += (int)(arr[j] * pow(10, bit - j - 1));
//	}
//	return ret;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int bit = get_bit(N);
//	int ret = reverse(N, bit);
//	printf("%d\n", ret);
//	return 0;
//}