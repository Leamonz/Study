#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0]+1));//8
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));//8
	printf("%d\n", sizeof(*(a+1)));//4
	printf("%d\n", sizeof(&a[0]+1));//8
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//48
	printf("%d\n", sizeof(a[3]));//8

	//char* p = "abcdef";
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//error
	////printf("%d\n", strlen(p[0]));//error
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5

	//printf("%d\n", sizeof(p));//8
	//printf("%d\n", sizeof(p + 1));//8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//8
	//printf("%d\n", sizeof(&p + 1));//8
	//printf("%d\n", sizeof(&p[0] + 1));//8


	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//8
	//printf("%d\n", sizeof(&arr + 1));//8
	//printf("%d\n", sizeof(&arr[0] + 1));//8
	return 0;
}