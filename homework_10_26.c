#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.ѡ������
//2.��������
//3.��������
//void selection_sort(int arr[], int sz)
//{
//	int min_value = 0;//��С��
//	int min_position = 0;//��С�����±�
//	for (int i = 0; i < sz; i++)
//	{
//		min_value = arr[i];
//		min_position = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[j] < min_value)
//			{
//				min_value = arr[j];
//				min_position = j;//��¼��Сֵ�Լ���Сֵ��Ӧ�±�
//			}
//		}
//		if (min_value < arr[i])
//		{
//			arr[min_position] = arr[i];
//			arr[i] = min_value;//��С����ѭ����ʼ�������н���
//		}
//	}
//}
//void insertion_sort(int arr[], int sz)
//{
//	int j;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int value = arr[i + 1];//ȡ��arr[i]�����ֵ
//		for (j = i + 1; j >= 0 && value < arr[j - 1]; j--)
//		{
//			arr[j] = arr[j - 1];//��value�������Ƚ�
//		}
//		arr[j] = value;//�������
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
//		int mid = get_mid(arr, left, right);//����ȷ��pivot�±�
//		quick_sort(arr, left, mid - 1);//����������н�������
//		quick_sort(arr, mid + 1, right);//���ұ������н�������
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