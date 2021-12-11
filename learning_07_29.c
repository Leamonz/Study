#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//用函数计算两个数的和
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个数:");
//	scanf("%d,%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//函数strcpy()
//int main()
//{
//	char arr1[] = "Hello World!";
//	char arr2[] = "";
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//函数memset()
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*', 5);
//	printf("%s\n",arr);
//	return 0;
//}
//写一个用于比较两个数大小的函数
//int compare(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else if (x < y)
//		z = y;
//	else
//		printf("%d = %d\n",x,y);
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int BIGGER = 0;
//	scanf("%d,%d",&a,&b);
//	BIGGER = compare(a, b);
//	if (BIGGER != 0)
//	{
//		printf("较大值是:%d\n", BIGGER);
//	}
//	return 0;
//}	