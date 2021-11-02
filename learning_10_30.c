#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//abcdef
//	printf("%s\n", pc);//abcdef，直到\0停止打印
//	char* p = "abcdef";//"abcdef"是一个常量字符串(不能被改变)，这样把首元素的地址赋给了p
//	printf("%s\n", p);//abcdef
//	printf("%c\n", *p);//a
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//常量字符串，准确写法要在前面加上const
//	//*p = 'W';//Segementation fault---段错误    内存访问时出错
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("2\n");
//	}
//	if (p1 == p2)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("2\n");
//	}
//	//结果2 1
//	return 0;
//}

//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* parr[4] = { &a,&b,&c,&d };
//	printf("%p\n", parr[0]);
//	printf("%p\n", parr[1]);
//	printf("%p\n", parr[2]);
//	printf("%p\n", parr[3]);*/
//	//错误用法
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	char arr[20] = { 0 };
//	while (1)
//	{
//		system("shutdown -s -t 60");
//		printf("你的电脑将在1分钟后自动关机，请输入“我是猪”取消关机\n");
//		scanf("%s", &arr);
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ", (*pa)[i]);//数组指针的使用方法
//		//printf("%d ", *(*pa + i));//*pa==arr
//		/*printf("%d ", *(p + i));*/
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	/*int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);//四种写法结果是一样的
//	}
//	return 0;
//}