#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));//7��������\0��
//	printf("%d\n", strlen(arr));//6��������\0��
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//42���������
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)//strlen()Ĭ�Ϸ���һ���޷�������
//	{
//		printf("%c ",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n",&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[3][4];
//	char arr2[3][5];
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };//��ά����ĳ�ʼ��
//	printf("%d\n",arr[0][2]);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-2d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}