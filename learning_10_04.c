#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);//error----a只在复合语句内部有效
//	return 0;
//}
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//int main()
//{
//	char acX[] = "abcdefg";//8个元素
//	char acY[] = { 'a','b','c','d','f','g' };//7个元素
//	return 0;
//}
//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 2,3,1,5,43,28,8,9,10,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	bubble_sort(arr, sz);
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-2d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz/2; j++)
//		{
//			int tmp = 0;
//			tmp = arr[j];
//			arr[j] = arr[sz - 1 - j];
//			arr[sz - 1 - j] = tmp;
//		}
//	}
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp; 
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;//两位数字一个字节，在内存里是倒着存的
//	char* pc = (char*)a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int i = 0;//全局变量不初始化默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof计算变量/类型所占内存大小最后得到的是一个无符号数
//		//无符号数与有符号数进行各种运算会先将有符号数转化为无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++;//c=8,b=7,a=8
//	b += a++ + c;//c=8,a=9,b=23
//	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
//	return 0;
//}