#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	/*i = a++ && ++b && d++;*///1 2 3 4
//	i = a++ || ++b || d++;//1 3 3 4
//	/*i = a++ && ++b && d++;*///2 3 3 5
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("b=%d\n", b);*/
//	b = (a > 5 ? 3 : -3);//三目操作符
//	printf("b=%d\n", b);
//	return 0;
//}
//求两个数的较大值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = (a > b ? a : b);
//	printf("ret=%d", ret);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}
//创建一个结构体类型----struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char ID[100];
//	//成员变量
//};
//int main()
//{
//	struct Stu s = { "李小号",18,"MALE","2021141460098"};//创建了一个类型为struct Stude的学生对象并初始化
//	struct Stu* p = &s;
//	printf("name: %s\n", s.name);
//	printf("age= %d\n", s.age);
//	printf("sex: %s\n", s.sex);
//	printf("ID: %s\n", s.ID);
//	printf("\n");
//	printf("name: %s\n", p->name);
//	printf("name: %d\n", p->age);
//	printf("name: %s\n", p->sex);
//	printf("name: %s\n", p->ID);
//	printf("\n");
//	printf("name: %s\n", (*p).name);
//	printf("name: %d\n", (*p).age);
//	printf("name: %s\n", (*p).sex);
//	printf("name: %s\n", (*p).ID);
//	return 0;
//}