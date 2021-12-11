#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int x, n;
//	scanf("%d %d", &x, &n);
//	int sum = 0;
//	if ((n + x) < 7)
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			if (((x + i) % 6 == 0) || ((x + i) % 7 == 0))
//				continue;
//			else
//				sum += 250;
//		}
//	}
//	else
//	{
//		int Break = (n + x) / 7;
//		sum += (250 * (n - Break * 2));
//	}
//	printf("%d\n", sum);
//	return 0;
//}//error

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int min1 = a * 60 + b;
//	int min2 = c * 60 + d;
//	int diff = min2 - min1;
//	int hour = diff / 60;
//	int min = diff - hour * 60;
//	printf("%d %d\n", hour, min);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double s, x;
//	scanf("%lf %lf", &s, &x);
//	double distance = 0;
//	int i = 0;
//	while (distance < (s - x))
//	{
//		distance += 7 * pow(0.98, i);
//		i++;
//	}
//	if (distance > (s + x))
//		printf("n\n");
//	else
//	{
//		distance += 7 * pow(0.98, i);
//		if (distance > (s + x))
//			printf("n\n");
//		else
//			printf("y\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	do
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	} while (arr[i - 1] != 0);
//	for (int j = i - 2; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int cute(int* arr, int* p, int flag)
//{
//	int count = 0;
//	for (int i = 0; i < flag; i++)
//	{
//		if (*(arr + i) < *p)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count[100] = { 0 };
//	int n = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		count[j] = cute(arr, &arr[j], j);
//	}
//	for (int k = 0; k < n; k++)
//	{
//		printf("%d ", count[k]);
//	}
//	return 0;
//}