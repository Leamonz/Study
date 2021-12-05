#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef struct zx
//{
//	char sex[20];
//	char name[20];
//	char birth[20];
//	int age;
//}pig;
//int main()
//{
//	pig pig1 = { "unknown","张珣","2003.05.06",18 };
//	printf("%s\n%s\n%s\n%d\n", pig1.sex, pig1.name, pig1.birth, pig1.age);
//	return 0;
//}

//#pragma pack(4)//设置默认对齐数为4
//struct s 
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消之前设置的默认对齐数
//struct stu
//{
//	char c1;
//	double d;
//};
//int main()
//{
//	struct s s1;
//	printf("%d\n", sizeof(s1));//12
//	struct stu s2;
//	printf("%d\n", sizeof(s2));//16
//	return 0;
//}
//#include<stddef.h>
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
////int main()
////{
////	printf("%d\n", offsetof(struct s, c));//0
////	printf("%d\n", offsetof(struct s, i));//4
////	printf("%d\n", offsetof(struct s, d));//8
////	return 0;
////}
//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};//定义一个位段
//int main()
//{
//	struct A s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
