#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int count(int* start, int sz)
//{
//	int flag = *(start + sz);
//	int count = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (*(start + i) < flag)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int fish[100] = { 0 };
//	int num[100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &fish[i]);
//	}
//	for (int j = 1; j < n; j++)
//	{
//		num[j] = count(fish, j);
//	}
//	for (int k = 0; k < n; k++)
//	{
//		printf("%d ", num[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int un[3000] = { 0 };
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		if (i >= 1)
//			un[i] = (a + b) + un[i - 1] - 8;
//		else
//			un[i] = (a + b) - 8;
//	}
//	int sum = 0;
//	for (int j = 0; j < n; j++)
//	{
//		sum += un[j];
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int sum(int n)
//{
//	return (n * (n + 1)) / 2;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int line = 0;
//	int flag = 1;
//	int upper = 0;
//	int lower = 0;
//	while (flag)
//	{
//		if ((sum(line) < N) && (sum(line + 1) >= N))
//		{
//			line += 1;
//			flag = 0;
//		}
//		else
//			line++;
//	}
//	if (line % 2 == 1)
//	{
//		upper = line - (N - sum(line - 1) - 1);
//		lower = N - sum(line - 1);
//		printf("%d/%d\n", upper, lower);
//	}
//	else
//	{
//		upper = N - sum(line - 1);
//		lower = line - (N - sum(line - 1) - 1);
//		printf("%d/%d\n", upper, lower);
//	}
//	return 0;
//}

//int find(int upper, int lower)
//{
//	int line = upper + lower - 1;
//	if (line == 1)
//		return 1;
//	int n = sum(line - 1);
//	int up, low;
//	if (line % 2 == 1)
//	{
//		up = line;
//		low = 1;
//		int j = 0;
//		for (j = 0; (up != upper) || (low != lower); j++)
//		{
//			up = line - j;
//			low = 1 + j;
//		}
//		return n + j;
//	}
//	else
//	{
//		up = 1;
//		low = line - 1;
//		int j = 0;
//		for (j = 0; (up != upper) || (low != lower); j++)
//		{
//			up = 1 + j;
//			low = line - j;
//		}
//		return n + j;
//	}
//}
//#include<stdio.h>
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}
//int sum(int n)
//{
//	return (n * (n + 1)) / 2;
//}
//int judge(int upper, int lower)
//{
//	for (int i = (int)max(upper, lower); i >= 2; i--)
//	{
//		if ((upper % i == 0) && (lower % i == 0))
//			return i;
//	}
//	return 0;
//}
//int main()
//{
//	int upper1, lower1, upper2, lower2, upper, lower;
//	scanf("%d/%d", &upper1, &lower1);
//	scanf("%d/%d", &upper2, &lower2);
//	upper = upper1 * upper2;
//	lower = lower1 * lower2;
//	int ret = judge(upper, lower);
//	if (ret == 0)
//	{
//		printf("%d %d\n", lower, upper);
//	}
//	else
//	{
//		upper /= ret;
//		lower /= ret;
//		printf("%d %d\n", lower, upper);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x, n;
//	scanf("%d %d", &x, &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; ((x + i) <= 7) && (i <= n); i++)
//	{
//		if ((x + i == 6) || (x + i == 7))
//			continue;
//		else
//			sum += 250;
//	}
//	int off = 0;
//	if (n - i > 7)
//	{
//		if ((n - i) % 7 <= 5)
//			off = ((n - i) / 7) * 2;
//		else
//			off = ((n - i) / 7 + (n - i) % 7 - 5) * 2;
//	}
//	else
//	{
//		if (n - i > 5)
//			off = n - i - 5;
//	}
//	sum = sum + 250 * (n - i - off);
//	printf("%d\n", sum);
//	return 0;
//}