#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a[7] = { 0 };
//	int b[7] = { 0 };
//	int c[7] = { 0 };
//	int date = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d %d", &a[i], &b[i]);
//		c[i] = a[i] + b[i];
//		if ((c[i] > 8) && (date == 0))
//			date = i + 1;
//		else if ((c[i] > 8) && (c[date - 1] < c[i]))
//			date = i + 1;
//	}
//	printf("%d\n", date);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[12] = { 0 };
//	for (int i = 0; i < 12; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int mom = 0;
//	int jin = 0;
//	int X = 0;
//	for (int j = 0; j < 12; j++)
//	{
//		jin += 300;
//		if (jin - arr[j] >= 100)
//		{
//			mom += ((jin - arr[j]) / 100) * 100;
//		}
//		jin = jin - ((jin - arr[j]) / 100) * 100 - arr[j];
//		if (jin < 0)
//		{
//			X = j + 1;
//			break;
//		}
//	}
//	if (jin < 0)
//		printf("%d\n", -X);
//	else
//	{
//		jin += mom * 1.2;
//		printf("%d\n", jin);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	long n = 0;
//	for (int i = 0; i < t; i++)
//	{
//		long count = 0;
//		scanf("%ld", &n);
//		for (long j = 0; j <= n; j++)
//		{
//			if ((j % 7 != 0) && (j != 0))
//				count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
#include<limits.h>
//#include<stdio.h>
//int main()
//{
//	long n = 0;
//	long k = 0;
//	scanf("%ld %ld", &n, &k);
//	long left = n;
//	long count = n;
//	while (left >= k)
//	{
//		count += left / k;
//		left = left / k + left % k;
//	}
//	printf("%ld\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int K = 0;
//	scanf("%d", &K);
//	int a1, a2, a3;
//	int count = 0;
//	for (int i = 10000; i <= 30000; i++)
//	{
//		a1 = i / 100;
//		a2 = (i - (i / 10000) * 10000) / 10;
//		a3 = i % 1000;
//		if ((a1 % K == 0) && (a2 % K == 0) && (a3 % K == 0))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	if (count == 0)
//		printf("No\n");
//	return 0;
//}