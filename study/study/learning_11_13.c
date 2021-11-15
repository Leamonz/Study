#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int intcmp(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int main()
//{
//	int arr[] = { 12,33,42,5,36,28,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), intcmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//int cmpStu_byage(const void* e1, const void* e2)
//{
//	return ((Stu*)e1)->age - ((Stu*)e2)->age;
//}
//int cmpStu_byname(const void* e1, const void* e2)
//{
//	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
//}
//int main()
//{
//	Stu s[3] = { {"张三",30},{"李四",40},{"王五",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmpStu_byage);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	qsort(s, sz, sizeof(s[0]), cmpStu_byname);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}
//实现一个冒泡排序函数可以达到qsort的功能
//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{ 
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			//比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				//交换
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 12,33,42,5,36,28,11 };
//	Stu s[3] = { {"张三",30},{"李四",40},{"王五",25} };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	int sz2 = sizeof(s) / sizeof(s[0]);
//	bubble_sort(arr, sz1, sizeof(arr[0]), intcmp);
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	bubble_sort(s, sz2, sizeof(s[0]), cmpStu_byage);
//	for (int i = 0; i < sz2; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}

//int main()
//{
//	int b;
//	char t = '0';
//	char a[100];
//	scanf("%s", a);
//	int c = strlen(a) - 1;
//	for (b = 0; b <= c / 2; b++)
//	{
//		t = a[b];
//		a[b] = a[c - b];
//		a[c - b] = t;
//
//	}
//	//for (b = 0; b <= c; b++)
//	//{
//	//	printf("%c", a[b]);
//	//}
//	printf("%s", a);
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr+0));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr+1));
//	printf("%d\n", strlen(&arr[0]+1));
//	return 0;
//}