#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int num[100][100] = { 0 };//矩阵
//int tmp[100][100] = { 0 };//临时存放矩阵中的数
//int jjh1[100][100] = { 0 };//卷积核
//int jjh2[100][100] = { 0 };//卷积核（翻转180°后）
//int main()
//{
//	int x, h;
//	scanf("%d%d", &x, &h);//矩阵、卷积核的阶数
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			scanf("%d", &num[i][j]);
//			tmp[i][j] = num[i][j];
//		}
//	}
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < h; j++)
//		{
//			scanf("%d", &jjh1[i][j]);
//			jjh2[h - i - 1][h - j - 1] = jjh1[i][j];
//		}
//	}
//	for (int n = 0; n < x; n++)
//	{
//		for (int m = 0; m < x; m++)
//		{
//			int sum = 0;
//			//卷积核1
//			for (int a = 0; a < h; a++)
//			{
//				for (int b = 0; b < h; b++)
//				{
//					if ((n - h / 2 + a < 0) || (m - h / 2 + b < 0))
//						continue;
//					else
//						sum += (jjh2[a][b] * tmp[n - h / 2 + a][m - h / 2 + b]);
//				}
//			}
//			num[n][m] = sum;
//		}
//	}
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			printf("%d ", num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int find;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int d, c;
//		int arr[100];
//		int brr[100];
//		int find2;
//		for (c = 0; c < b; c++)
//		{
//			scanf("%d", &arr[c]);
//			brr[c] = arr[c];
//		}
//		if (a % 2 == 0)
//		{
//			printf("ERROR\n");
//			continue;
//		}
//		int w;
//		if (a > b)
//		{
//			for (w = 0; w < b; w++)
//				printf("%d ", arr[w]);
//			printf("\n");
//			continue;
//		}
//		for (d = 0; d < b - a + 1; d++)
//		{
//			for (find = d; find < d + a; find++)
//			{
//				int cunchu = 0;
//				for (find2 = d; find2 < d + a; find2++)
//				{
//					if (brr[find] > brr[find2])
//						cunchu += 1;
//				}
//				if (cunchu == a / 2)
//				{
//					arr[(d + a + d) / 2] = brr[find];
//					break;
//				}
//			}
//		}
//		for (w = 0; w < b; w++)
//			printf("%d ", arr[w]);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int sort(int arr[], int start, int sz)//对滤波窗口内的数进行排序
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[start + j] > arr[start + j + 1])
//			{
//				int tmp = arr[start + j];
//				arr[start + j] = arr[start + j + 1];
//				arr[start + j + 1] = tmp;
//			}
//		}
//	}
//	return arr[start + (sz - 1) / 2];
//}
//void copy(int* tmp, int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		*(tmp + i) = *(arr + i);
//	}
//}
//int main()
//{
//
//	int w, n;
//	int arr[1000] = { 0 };
//	int tmp[1000] = { 0 };
//	int replace[1000] = { 0 };
//	while (scanf("%d%d", &w, &n) != EOF)
//	{
//		if (w % 2 == 1)
//		{
//			for (int p = 0; p < n; p++)
//			{
//				scanf("%d", &arr[p]);
//			}
//			copy(tmp, arr, n);
//			if (w <= n)
//			{
//				int k = 0;
//				for (int i = (w - 1) / 2; i <= n - 1 - (w - 1) / 2; i++)
//				{
//					replace[k] = sort(tmp, i - (w - 1) / 2, w);
//					copy(tmp, arr, n);
//					k++;
//				}//找到替换的值并储存
//				for (int j = 0; j < k; j++)
//				{
//					arr[((w - 1) / 2) + j] = replace[j];
//				}//替换
//			}
//			else
//				;
//			for (int m = 0; m < n; m++)
//			{
//				printf("%d ", arr[m]);
//			}
//			printf("\n");
//		}
//		else
//			printf("ERROR\n");
//	}
//	return 0;
//}

//分类排序
//#include<stdio.h>
//int odd[205];//存放奇数
//int even[205];//存放偶数
//void sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int k = 0; k < sz; k++)
//		printf("%d ", arr[k]);
//}
//int main()
//{
//	int n = 0;
//	int input = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int odd_num = 0;
//		int even_num = 0;
//		char ch;
//		do
//		{
//			scanf("%d", &input);
//			if (input % 2 == 1)
//			{
//				odd[odd_num] = input;
//				odd_num++;
//			}
//			else
//			{
//				even[even_num] = input;
//				even_num++;
//			}
//		} while ((ch = getchar()) != '\n');
//		sort(odd, odd_num);
//		sort(even, even_num);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//void print(char* start)
//{
//	int num = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		if (*(start + i) >= '0' && *(start + i) <= '9')
//			num += ((*(start + i) - '0') * (int)pow(16, 1 - i));
//		else
//		{
//			switch (*(start + i))
//			{
//			case'A':
//				num += ((int)pow(16, 1 - i) * 10);
//				break;
//			case'B':
//				num += ((int)pow(16, 1 - i) * 11);
//				break;
//			case'C':
//				num += ((int)pow(16, 1 - i) * 12);
//				break;
//			case'D':
//				num += ((int)pow(16, 1 - i) * 13);
//				break;
//			case'E':
//				num += ((int)pow(16, 1 - i) * 14);
//				break;
//			case'F':
//				num += ((int)pow(16, 1 - i) * 15);
//				break;
//			}
//		}
//	}
//	printf("%c", (char)num);
//}
//int main()
//{
//	int n = 0;
//	char str[205];
//	scanf("%d", &n);
//	getchar();
//	while (n--)
//	{
//		scanf("%s", &str);
//		int len = strlen(str);
//		char* start = str;
//		for (int i = 0; i < len; i++)
//		{
//			if (i % 2 == 1)
//			{
//				print(start);
//				start = str + i + 1;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}