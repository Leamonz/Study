#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ѭ���ķ�ʽ����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	for (i = 1 , ret=1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n",ret);
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1, ret = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int mul = Fac1(n);//����n�Ľ׳�
//	printf("%d\n",mul);
//	return 0;
//}
//�õݹ�ķ�ʽ����n�Ľ׳�
//int Fac2(int n)
//{
//	if (n > 1)
//		return n * Fac2(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int mul = Fac2(n);//����n�Ľ׳�
//	printf("%d\n", mul);
//	return 0;
//}
//���n��쳲�������
//int fib(int n)//���n��쳲�������
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//���ַ�����������Ч�ʵ�
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int count = 0;
//	if (n > 2)
//	{
//		for (count = 1; count <= (n-2); count++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	else
//		return 1;
//}
//�Ż��汾
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//�������̫���ڴ���ܻ�����������ٶ��кܴ�����
//int main()
//{
//	int n = 0;	
//	scanf("%d", &n);
//	printf("%d\n",fib(n));//��ӡ��n��쳲�������
//	return 0;
//}
