#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ��ѧ��
//���֣����䣬�绰���Ա�
//struct Student//struct----�ṹ��ؼ��֣�Student----�ṹ���ǩ��struct Student----�ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[6];
//}s1, s2, s3;//����һ���ṹ������
//s1,s2,s3������ȫ�ֵĽṹ�����
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
//	//struct Student s1;//�����ṹ�����(�ֲ��Ľṹ�����)
//	Stu s2 = { "Hubert",18,"15208287245","MALE" };//���ֶ��巽���ǵȼ۵�
//	//�ṹ��ĳ�ʼ��
//	//T t = { 'h',80,{"Leamonz",18,"1234567890","FEMALE"} };
//	//Ƕ�׽ṹ��ĳ�ʼ��
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
//void Print1(Stu tmp)//��ֵ����
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void Print2(Stu* ps)//��ַ����
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