#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//p��һ���ṹ��ָ��
////����p��ֵΪ0x100000
////��֪�ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//�ṹ��ָ�� + 1----����һ���ṹ��Ĵ�С
//	printf("%p\n", (unsigned long)p + 0x1);//����+1
//	printf("%p\n", (unsigned int*)p + 0x1);//��һ�����͵�ַ
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x\n", ptr1[-1]);//4
//	//printf("%x\n", *ptr2);//err
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0]; 
//	printf("%d\n", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//pa���'w'�ĵ�ַ��ָ���ַ���"work"
//	pa++;//pa+1ָ���ַ���"at"
//	printf("%s\n", *pa);
//	return 0;
//}