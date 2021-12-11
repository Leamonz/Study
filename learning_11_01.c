#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int C(a, b)
//{
//	int i, j, X, Y;
//
//	for (i = a, X = 1, j = b; i > a - j; i--)
//	{
//		X = X * i;
//	}
//	for (j = b, Y = 1; j > 0; j--)
//	{
//		Y = Y * j;
//	}
//	int c = X / Y;
//	return c;
//}
//
//int main(void)
//{
//	int i, n, sum;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int a, b = 0;
//		scanf("%d", &a);
//		if (a == 0)
//		{
//			printf("1\n");
//		}
//		else if (a != 0)
//		{
//			for (b = 0, sum = 0; a >= b; a--, b++)
//			{
//				sum = sum + C(a, b);
//			}
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}


//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[5][])//error
////{}
////void test3(int* arr)//error 二维数组首元素的地址是一个一维数组的地址，整型指针不能存放数组地址
////{}
////void test4(int** arr)//error
////{}
//void test5(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	return 0;
//}

//void test(int** p)
//{}
//int main()
//{
//	int* ptr = NULL;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(a, b));
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*pa)(char*) = Print;
//	(*pa)("hello world!");
//	return 0;
//}

//不定义中间变量实现两个数的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = !a;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}