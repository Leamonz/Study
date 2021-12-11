#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//10个元素要进行9趟冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//对数组arr按升序进行排序
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设本趟排序的数据已经是有序的
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
//			}
//		}
//		if (1 == flag)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 12,3,5,7,2,6,8,43,14,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	bubble_sort(arr, sz);
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ",arr[n]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}
//数组名其实是首元素的地址，是一个指针变量
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n",&arr);
//	printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	/*printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	printf("%d\n",*arr);*/
//	return 0;
//}