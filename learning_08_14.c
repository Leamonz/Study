#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ð������
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//10��Ԫ��Ҫ����9��ð������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//������arr�������������
//	bubble_sort(arr, sz);//ð��������
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
//		int flag = 1;//���豾������������Ѿ��������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
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
//��������ʵ����Ԫ�صĵ�ַ����һ��ָ�����
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