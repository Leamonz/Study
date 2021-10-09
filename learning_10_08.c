#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//描述一个学生
//名字，年龄，电话，性别
//struct Student//struct----结构体关键字，Student----结构体标签，struct Student----结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[6];
//}s1, s2, s3;//定义一个结构体类型
//s1,s2,s3是三个全局的结构体变量
//typedef struct Student
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[6];
//}Stu;
//typedef struct T
//{
//	char a;
//	int b;
//	Stu s3;
//}T;
//int main()
//{
//	//struct Student s1;//创建结构体变量(局部的结构体变量)
//	Stu s2 = { "Hubert",18,"15208287245","MALE" };//两种定义方法是等价的
//	//结构体的初始化
//	//T t = { 'h',80,{"Leamonz",18,"1234567890","FEMALE"} };
//	//嵌套结构体的初始化
//	//printf("%s\n", t.s3.name);
//	//printf("%s\n", s2.name);
//	//printf("%d\n", t.b);
//	//printf("%s\n", t.s3.tele);
//	Print1(s2);
//	printf("\n");
//	Print2(&s2);
//	return 0;
//}
//typedef struct Student
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[6];
//}Stu;
//void Print1(Stu tmp)//传值调用
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void Print2(Stu* ps)//传址调用
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s2 = { "Hubert",18,"15208287245","MALE" };
//	Print1(s2);
//	printf("\n");
//	Print2(&s2);
//	return 0;
//}