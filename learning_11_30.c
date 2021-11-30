#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
////声明一个结构体类型
//typedef struct STU
//{
//	int a;
//	int b;
//	char c;
//}stu;
//struct SCUer
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}stu1, stu2, stu3;//全局结构体变量
//struct SCUer stu4;//全局结构体变量
//struct
//{
//	int a;
//	char b;
//}x;//匿名结构体变量，无法定义新的变量，必须在声明后紧接着定义结构体变量
//int main()
//{
//	struct SCUer stu5;//局部结构体变量
//	stu stu6;
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));//12
//	printf("%d\n", sizeof(struct s2));//8
//	printf("%d\n", sizeof(struct s3));//16
//	printf("%d\n", sizeof(struct s4));//32
//	return 0;
//}


//#include<stdio.h>
//long arr[50000] = { 0 };
//int main()
//{
//	long a, b, c, d, e;
//	scanf("%d", &a);
//	for (b = 0; b < a; b++)
//	{
//		scanf("%ld", &arr[b]);
//	}
//	d = 0;
//	e = 0;
//	for (c = 0; c < a; c++)
//	{
//		d = d + arr[c];
//		if (d < e)
//			e = d;
//	}
//	printf("%ld", - e);
//	return 0;
//}

