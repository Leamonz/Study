#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int is_prime(int year)
//{
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//		return 1;
//	else
//		return 0;
//}
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int min(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int year, day, month;
//	scanf("%d/%d/%d", &year, &month, &day);
//	char* months[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//	int ret = is_prime(year);
//	if ((month>=1)&&(month<=12)&&(ret==0))
//	{
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			if((day<=31)&&(day>=1))
//				printf("%s %d,%d\n", months[month - 1], day, year+2000);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			if((day <= 30) && (day >= 1))
//				printf("%s %d,%d\n", months[month - 1], day, year + 2000);
//			break;
//		case 2:
//			if ((day <= 28) && (day >= 1))
//				printf("%s %d,%d\n", months[month - 1], day, year + 2000);
//			break;
//		default:
//			break;
//		}
//	}
//	else if ((month >= 1) && (month <= 12) && (ret == 1))
//	{
//		switch (month)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			if ((day <= 31) && (day >= 1))
//				printf("%s %d,%d\n", months[month - 1], day, year + 2000);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			if ((day <= 30) && (day >= 1))
//				printf("%s %d,%d\n", months[month - 1], day, year + 2000);
//			break;
//		case 2:
//			if ((day <= 29) && (day >= 1))
//				printf("%s %d,%d\n", months[month - 1], day, year + 2000);
//			break;
//		default:
//			break;
//		}
//	}
//	if ((year >= 1) && (year <= 12))
//	{
//		int sum = 0;
//		int diff = max(year, month) - min(year, month) - 1;
//		for (int i = 1; i < diff; i++)
//		{
//			if (is_prime(2000 + i) == 1)
//				sum += 366;
//			else
//				sum += 365;
//		}
//		int day1 = 0;
//		int day2 = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//int fib(int n, int a, int i2)
//{
//	if (n == 1)
//		return a;
//	else if (n == 2)
//		return i2;
//	else
//		return fib(n - 1, a, i2) + fib(n - 2, a, i2);
//}
//int fib_sum(int n, int a, int i2)
//{
//	int sum = 0;
//	for (int i = n; i >= 3; i--)
//	{
//		sum += fib(i - 2, a, i2);
//	}
//	return sum + a;
//}
//int main()
//{
//	int a, n, m, x;
//	scanf("%d %d %d %d", &a, &n, &m, &x);
//	int i2 = 0;
//	for (i2 = 0; i2 <= 10000; i2++)
//	{
//		if (m == fib_sum(n, a, i2))
//			break;
//	}
//	int num = fib_sum(x, a, i2);
//	printf("%d\n", num);
//	return 0;
//}