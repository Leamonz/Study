#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
//double sum(int n)
//{
//	double sum = 0;
//	for (int i = n; i >= 1; i--)
//	{
//		sum += 1.0 / i;
//	}
//	return sum;
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int flag = 0;
//	int n = 0;
//	while (flag == 0)
//	{
//		if (sum(n) > (double)k)
//		{
//			printf("%d\n", n);
//			flag = 1;
//		}
//		else
//			n++;
//	}
//	return 0;
//}
int check_sys1()
{
	int a = 1;
	if (*(char*)&a == 1)
		return 1;
	else
		return 0;
}
int check_sys2()
{
	union un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
//int main()
//{
//	/*int ret = check_sys1();*/
//	int ret = check_sys2();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum sex s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int height = 0;
//	int count = 0;
//	scanf("%d", &height);
//	for (int j = 0; j < 10; j++)
//	{
//		if (arr[j] <= height + 30)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//void check(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (*(arr + j) == *(arr + i))
//				*(arr + j) = 0;
//		}
//	}
//}
//void selection_sort(int arr[], int sz)
//{
//	int min_value = 0;//最小数
//	int min_position = 0;//最小数的下标
//	for (int i = 0; i < sz; i++)
//	{
//		min_value = arr[i];
//		min_position = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[j] < min_value)
//			{
//				min_value = arr[j];
//				min_position = j;//记录最小值以及最小值对应下标
//			}
//		}
//		if (min_value < arr[i])
//		{
//			arr[min_position] = arr[i];
//			arr[i] = min_value;//最小数与循环开始的数进行交换
//		}
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int N = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	check(arr, N);
//	selection_sort(arr, N);
//	int M = 0;
//	for (int j = 0; j < N; j++)
//	{
//		if (arr[j] != 0)
//			M++;
//	}
//	printf("%d\n", M);
//	for (int k = 0; k < N; k++)
//	{
//		if (arr[k] != 0)
//			printf("%d ", arr[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	long n = 0;
//	scanf("%ld", &n);
//	long value = 0;
//	long tmp = n;
//	for (long k = 2; k <= n/2; k++)
//	{
//		if ((tmp % k == 0) && (is_prime(k) == 1))
//		{
//			value = k;
//			if (tmp == k)
//				break;
//			else
//				tmp /= k;
//		}
//	}
//	printf("%ld\n", value);
//	return 0;
//}