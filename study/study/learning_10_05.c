#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//дһ��������һ������������ʽ�����룩��1�ĸ��� 
//int count_one(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}//error----ֻ����������
// ����һ
//int count_one(unsigned int n)//�Ż�----��n�����޷��������д���
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//������
//int count_one(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//		if ((n >> i) == 0)
//		{
//			return count;
//		}
//	}
//}
//������
//int count_one(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one(n);
//	printf("count = %d\n", ret);
//	return 0;
//}
//���������������в�ͬλ�ĸ���
// ����һ
//int compare_one(unsigned int a, unsigned int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a % 2) != (b % 2))
//		{
//			count++;
//		}
//		a = a / 2;
//		b = b / 2;
//	}
//	return count;
//}
//������----���
//int compare_one(unsigned int a, unsigned int b)
//{
//	int tmp = a ^ b;
//	int count = 0;
//	while (tmp != 0)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("a = ");
//	scanf("%d", &a);
//	printf("b = ");
//	scanf("%d", &b);
//	int ret = compare_one(a, b);
//	printf("count = %d\n", ret);
//	return 0;
//}
//��ӡһ����������������λ��ż��λ
//void print(int a)
//{
//	int i = 0;
//	printf("����λ��");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\nż��λ��");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("a = ");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//��������ʱ������������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d\nb = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("\na = %d\nb = %d\n", a, b);
//	return 0;
//}
//��ָ���ӡ�����е���
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
