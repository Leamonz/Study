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
//	printf("%s\n", pc);//abcdef��ֱ��\0ֹͣ��ӡ
//	char* p = "abcdef";//"abcdef"��һ�������ַ���(���ܱ��ı�)����������Ԫ�صĵ�ַ������p
//	printf("%s\n", p);//abcdef
//	printf("%c\n", *p);//a
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//�����ַ�����׼ȷд��Ҫ��ǰ�����const
//	//*p = 'W';//Segementation fault---�δ���    �ڴ����ʱ����
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
//	//���2 1
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
//	//�����÷�
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
//		printf("��ĵ��Խ���1���Ӻ��Զ��ػ��������롰������ȡ���ػ�\n");
//		scanf("%s", &arr);
//		if (strcmp(arr, "������") == 0)
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
//		//printf("%d ", (*pa)[i]);//����ָ���ʹ�÷���
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
//		printf("%d ", p[i]);//����д�������һ����
//	}
//	return 0;
//}