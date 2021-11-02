#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.选择排序
//2.插入排序
//3.快速排序
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
//void insertion_sort(int arr[], int sz)
//{
//	int j;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int value = arr[i + 1];//取出arr[i]后面的值
//		for (j = i + 1; j >= 0 && value < arr[j - 1]; j--)
//		{
//			arr[j] = arr[j - 1];//让value向后逐个比较
//		}
//		arr[j] = value;//插入操作
//	}
//}
//int get_mid(int arr[], int left, int right)
//{
//	int pivot = arr[left];
//	while (left < right)
//	{
//		while ((arr[right] >= pivot) && (left < right))
//		{
//			right--;
//		}
//		arr[left] = arr[right];
//		while ((arr[left] <= pivot) && (left < right))
//		{
//			left++;
//		}
//		arr[right] = arr[left];
//	}
//	arr[left] = pivot;
//	return left;
//}
//void quick_sort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int mid = get_mid(arr, left, right);//排序并确定pivot下标
//		quick_sort(arr, left, mid - 1);//对左边子序列进行排序
//		quick_sort(arr, mid + 1, right);//对右边子序列进行排序
//	}
//}
//int main()
//{
//	int v[] = { 3,4,1,5,32,46,20,19,89,28 };
//	int sz = sizeof(v) / sizeof(v[0]);
//	selection_sort(v,sz);
//	insertion_sort(v, sz);
//	quick_sort(v, 0, sz - 1);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", v[i]);
//	}
//	return 0;
//}