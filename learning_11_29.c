#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int sum(int n)
//{
//	return (n * (n + 1)) / 2;
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int flag = 0;
//	int i = 1;
//	int upper = 0;
//	int lower = 0;
//	while (flag == 0)
//	{
//		if (N >= sum(i) && N < sum(i + 1))
//			flag = i + 1;
//		else
//			i++;
//	}
//	if (flag % 2 == 0)
//	{
//		lower = flag;
//		upper = 1;
//		int n = N - sum(i);
//		for (int j = 0; j < n - 1; j++)
//		{
//			upper++;
//			lower--;
//		}
//		printf("%d/%d\n", upper, lower);
//	}
//	else if (flag % 2 == 1)
//	{
//		lower = 1;
//		upper = flag;
//		int n = N - sum(i);
//		for (int j = 0; j < n - 1; j++)
//		{
//			upper--;
//			lower++;
//		}
//		printf("%d/%d\n", upper, lower);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int get = 0;
//	int rest = 0;
//	scanf("%d", &n);
//	float tmp = 1 - 1.0 / n;
//	for (int i = n; i > 0; i--)
//	{
//		if (i == n)
//		{
//			int N = (int)pow(i, i);
//			while (N % n != 1)
//			{
//				N--;
//			}
//			printf("%d\n", N);
//			rest = N;
//		}
//		get = (rest - 1) / n;
//		rest = (rest - 1) * tmp;
//		printf("%d\n", get);
//	}
//	return 0;
//}

//#include<stdio.h>
//int arr[1000][1000] = { 0 };
//int min(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int row = 0;
//	int col = 0;
//	scanf("%d %d", &row, &col);
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	int ret = min(row, col);
//	if (ret % 2 == 0)
//	{
//		for (int i = 0; i < ret / 2; i++)
//		{
//			for (int j = i; j < row - i; j++)
//			{
//				printf("%d ", arr[j][i]);
//			}
//			for (int k = i + 1; k < col - i; k++)
//			{
//				printf("%d ", arr[row - i - 1][k]);
//			}
//			for (int m = row - i - 2; m >= i; m--)
//			{
//				printf("%d ", arr[m][col - i - 1]);
//			}
//			for (int n = col - i - 2; n >= i + 1; n--)
//			{
//				printf("%d ", arr[i][n]);
//			}
//		}
//	}
//	else if (ret % 2 == 1)
//	{
//		for (int i = 0; i < (ret + 1) / 2; i++)
//		{
//			for (int j = i; j < row - i; j++)
//			{
//				printf("%d ", arr[j][i]);
//			}
//			for (int k = i + 1; k < col - i; k++)
//			{
//				printf("%d ", arr[row - i - 1][k]);
//			}
//			for (int m = row - i - 2; m >= i; m--)
//			{
//				printf("%d ", arr[m][col - i - 1]);
//			}
//			for (int n = col - i - 2; n >= i + 1; n--)
//			{
//				printf("%d ", arr[i][n]);
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//long arr[50000] = { 0 };
//int main()
//{
//	long n = 0;
//	scanf("%ld", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%ld", &arr[i]);
//	}
//	long tmp = 0;
//	do
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] > 0)
//			{
//				tmp += arr[j];
//				continue;
//			}
//			else if (arr[j] < 0)
//			{
//				tmp += arr[j];
//				if (tmp < 0)
//					break;
//			}
//		}
//	} while (tmp < 0);
//	printf("%ld\n", tmp);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int get_entropy(char* str)
//{
//	int count = 0;
//	int len = (int)strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i + 1; j < len; j++)
//		{
//			if (*(str + j) < *(str + i))
//				count++;
//		}
//		for (int k = i - 1; k >= 0; k--)
//		{
//			if (*(str + k) > *(str + i))
//				count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char ch = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	ch = getchar();
//	char str[100][100] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &str[i][j]);
//		}
//		ch = getchar();
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m - i - 1; j++)
//		{
//			if (get_entropy(str[j]) > get_entropy(str[j + 1]))
//			{
//				char tmp[100] = "";
//				strcpy(tmp, str[j]);
//				strcpy(str[j], str[j + 1]);
//				strcpy(str[j + 1], tmp);
//			}
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	printf("********************\n");
//	return 0;
//}
// 
// 
//void bubble_sort(int t[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (t[j] < t[j + 1])
//			{
//				int tmp = t[j];
//				t[j] = t[j + 1];
//				t[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//#include<stdlib.h>
//int arr[50000] = { 0 };
//int tmp[50000] = { 0 };
//int len[50000] = { 0 };
//int intcmp(const void* ele1, const void* ele2)
//{
//	return *((int*)ele1) - *((int*)ele2);
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int count = 0;
//	int t = 0;
//	for (j = 0; j < N; j++)
//	{
//		for (int p = 1; p < N - j - 1; p++)
//		{
//			count = 0;
//			tmp[count] = arr[j];
//			count++;
//			int min = arr[j];
//			for (int k = j + p; k < N; k++)
//			{
//				if (arr[k] > min)
//				{
//					tmp[count] = arr[k];
//					min = arr[k];
//					count++;
//				}
//			}
//			len[t] = count;
//			t++;
//		}
//	}
//	qsort(len, t, sizeof(int), intcmp);
//	printf("%d\n", len[t - 1]);
//	return 0;
//}

//#include <stdio.h>
//long int arr[50001];
//int main()
//{
//	long int n;
//	scanf("%ld", &n);
//	for (long int i = 1; i <= n; i++)
//	{
//		scanf("%ld", &arr[i]);
//	}
//	long int min = 0;
//	long int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += arr[i];
//		if (sum < min)
//		{
//			min = sum;
//		}
//	}
//	printf("%ld", -min);
//}