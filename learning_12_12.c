#define _CRT_SECURE_NO_WARNINGS
//A
//#include<stdio.h>
//int main()
//{
//	int num[10] = { 0 };
//	int min = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	for (int k = 1; k < 10; k++)
//	{
//		if (num[k] != 0)
//		{
//			min = k;
//			break;
//		}
//	}
//	printf("%d", min);
//	num[min]--;
//	for (int j = 0; j < 10; j++)
//	{
//		if (num[j] == 0)
//			continue;
//		else
//		{
//			for (int p = num[j]; p > 0; p--)
//			{
//				printf("%d", j);
//			}
//		}
//	}
//	return 0;
//}

//B
//#include<stdio.h>
//int bin_search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return 1;
//	}
//	return 0;
//}
//int count(int arr[], int sz)
//{
//	int count = 0;
//	int flag[30] = { 0 };
//	int k = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (bin_search(flag, k, arr[i]) == 0)
//		{
//			count++;
//			flag[k] = arr[i];
//			k++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = count(arr, n);
//	printf("%d\n", num);
//	return 0;
//}

//C
//#include<stdio.h>
//int cal(int arr[7][7], int row, int col, int K)
//{
//	int out = 0;
//	return out;
//}
//int main()
//{
//	int N, K;
//	int arr[7][7] = { 0 };
//	int out[7][7] = { 0 };
//	scanf("%d %d", &N, &K);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int m = 0; m < N; m++)
//	{
//		for (int n = 0; n < N; n++)
//		{
//			out[m][n] = cal(arr, m, n, K);
//		}
//	}
//	return 0;
//}