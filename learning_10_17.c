#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int n = 0;
//	for (n = 0; n < sz - 1; n++)
//	{
//		int flag = 1;
//		for (i = 0; i < sz - 1; i++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 21,34,11,6,22,76,83,20,10,29 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//00000000 00000000 00000000 11111111----发生了整型提升（因为是无符号数，所以高位全部补0），char只取一个字节八个bit位11111111
//	printf("%d %d %d\n", a, b, c);//-1 -1 255
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = 128;//char存不下128, 128=127+1。对于有符号char来说,127+1=-128
//	printf("%u\n", a);
//	return 0;
//}