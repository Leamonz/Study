#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////1.√∞≈›≈≈–Ú
//void bubble_sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	char ch = 0;
//	do
//	{
//		scanf("%d", &arr[count]);
//		count++;
//	} while ((ch = getchar()) != '\n');
//	bubble_sort(arr, count);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
////2.—°‘Ò≈≈–Ú
//void select_sort(int* arr, int sz)
//{
//	int min_value = *arr;
//	int min_position = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		min_value = *(arr + i);
//		min_position = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (*(arr + j) < min_value)
//			{
//				min_value = *(arr + j);
//				min_position = j;
//			}
//		}
//		if (min_value < *(arr + i))
//		{
//			*(arr + min_position) = *(arr + i);
//			*(arr + i) = min_value;
//		}
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	char ch = 0;
//	do
//	{
//		scanf("%d", &arr[count]);
//		count++;
//	} while ((ch = getchar()) != '\n');
//	select_sort(arr, count);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
////3.øÏÀŸ≈≈–Ú
//int get_mid(int* arr, int left, int right)
//{
//	int pivot = *(arr + left);
//	while (left < right)
//	{
//		while ((*(arr + right) >= pivot) && (left < right))
//		{
//			right--;
//		}
//		*(arr + left) = *(arr + right);
//		while ((*(arr + left) <= pivot) && (left < right))
//		{
//			left++;
//		}
//		*(arr + right) = *(arr + left);
//	}
//	*(arr + left) = pivot;
//	return left;
//}
//void quick_sort(int* arr, int left, int right)
//{
//	if (left < right)
//	{
//		int mid = get_mid(arr, left, right);
//		quick_sort(arr, left, mid - 1);
//		quick_sort(arr, mid + 1, right);
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	char ch = 0;
//	do
//	{
//		scanf("%d", &arr[count]);
//		count++;
//	} while ((ch = getchar()) != '\n');
//	quick_sort(arr, 0, count - 1);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}