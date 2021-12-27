#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//long long count(int hour, int min, int sec)
//{
//	int time = 0;
//	for (int i = 0; i < hour; i++)
//	{
//		time += 3600;
//	}
//	time = time + min * 60 + sec;
//	return time;
//}
//int main()
//{
//	long long max = 0;
//	int hour1, min1, sec1, hour2, min2, sec2;
//	int num = 0;
//	scanf("%d:%d:%d", &hour1, &min1, &sec1);
//	scanf("%d:%d:%d", &hour2, &min2, &sec2);
//	scanf("%d", &num);
//	long long time1 = count(hour1, min1, sec1);
//	long long time2 = count(hour2, min2, sec2);
//	max = (time2 - time1) * num;
//	printf("%lld\n", max);
//	return 0;
//}

//#include<stdio.h>
//int sum1(int n)
//{
//	return (n * (n - 3)) / 2;
//}
//int sum2(int n)
//{
//	return ((n - 2) * (n - 3)) / 2;
//}
//int main()
//{
	//int a, n, m, x;
	//scanf("%d%d%d%d", &a, &n, &m, &x);
//	if (x <= 2)
//		printf("%d\n", a);
//	else if (x == 3)
//		printf("%d\n", 2*a);
//	else
//	{
//		//计算i2
//		int i2 = (m - 2 * a - sum2(n) * a) / sum1(n);
//		int output = 2 * a + sum1(x) * i2 + sum2(x) * a;
//		printf("%d\n", output);
//	}
//	return 0;
//}

//#include<stdio.h>
//int sum1[1000] = { 1, 1, 2 };//a的系数
//int sum2[1000] = { 0, 0, 0 };//i2的系数
//int main()
//{
//	int a, n, m, x;
//	scanf("%d%d%d%d", &a, &n, &m, &x);
//	if (x <= 2)
//		printf("%d\n", a);
//	else if (x == 3)
//		printf("%d\n", 2 * a);
//	else
//	{
//		//计算i2
//		for (int i = 3; i < n; i++)
//		{
//			sum1[i] = sum1[i - 1] + sum1[i - 2] - 1;//a的系数
//		}
//		for (int j = 3; j < n; j++)
//		{
//			sum2[j] = sum2[j - 1] + sum2[j - 2] + 1;//i2的系数
//		}
//		int i2 = (m - sum1[n - 2] * a) / sum2[n - 2];
//		int num = sum1[x - 1] * a + sum2[x - 1] * i2;
//		printf("%d\n", num);
//	}
//	return 0;
//}