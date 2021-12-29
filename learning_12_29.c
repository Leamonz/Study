#define _CRT_SECURE_NO_WARNINGS
//数组解约瑟夫环
//#include<stdio.h>
//int arr[105] = { 0 };
//void set(int arr[], int sz)
//{
//	for (int i = 1; i <= sz; i++)
//		arr[i] = 1;
//}
//int check(int arr[], int sz)//检查是否所有人都出圈了
//{
//	for (int i = 1; i <= sz; i++)
//	{
//		if (arr[i] == 1)
//			return 0;//有人没出圈
//	}
//	return 1;//所有人都出圈了
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	set(arr, n);
//	int c = 1;
//	int flag = 1;
//	while (check(arr, n) != 1)
//	{
//		if (arr[flag] == 0)
//		{
//			if (flag == n)
//				flag = 1;
//			else
//				flag++;
//			continue;
//		}//已经出圈的人则跳过
//		if (c == m)
//		{
//			arr[flag] = 0;
//			printf("%d ", flag);
//			c = 1;
//			if (flag == n)
//				flag = 1;
//			else
//				flag++;
//			continue;//报数到m的人则出圈并且打印编号
//		}
//		if (flag == n)
//		{
//			flag = 1;
//			c++;
//			continue;
//		}
//		c++;
//		flag++;
//	}
//	printf("\n");
//	return 0;
//}

//递归解约瑟夫环
//#include<stdio.h>
//int joseph(int n, int m, int i)
//{
//	if (i == 1)
//		return (m - 1 + n) % n;
//	else
//		return (joseph(n - 1, m, i - 1) + m) % n;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)
//		printf("%d ", joseph(n, m, i) + 1);
//	printf("\n");
//	return 0;
//}

//选择排序
//void select_sort(int arr[], int sz)
//{
//	int min = 0;
//	int min_position;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		min = arr[i];
//		min_position = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j];
//				min_position = j;
//			}
//		}
//		arr[min_position] = arr[i];
//		arr[i] = min;
//	}
//}

//插入排序
//#include<stdio.h>
//void insertion_sort(int arr[], int sz)
//{
//	int flag = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			flag = i + 1;
//			break;//找到无序部分开始的地方并记录
//		}
//	}
//	for (int j = flag; j < sz; j++)
//	{
//		for (int k = j - 1; k >= 0; k--)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}//将无序部分的数字插入到有序部分
//}
//int main()
//{
//	int arr[10] = { 10,3,13,18,98,28,33,7,43,16 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	insertion_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}