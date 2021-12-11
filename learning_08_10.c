#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用循环的方式计算n的阶乘
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
//	int mul = Fac1(n);//计算n的阶乘
//	printf("%d\n",mul);
//	return 0;
//}
//用递归的方式计算n的阶乘
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
//	int mul = Fac2(n);//计算n的阶乘
//	printf("%d\n", mul);
//	return 0;
//}
//求第n个斐波那契数
//int fib(int n)//求第n个斐波那契数
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//这种方法计算量大，效率低
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
//优化版本
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
//如果数字太大内存可能会溢出，但是速度有很大提升
//int main()
//{
//	int n = 0;	
//	scanf("%d", &n);
//	printf("%d\n",fib(n));//打印第n个斐波那契数
//	return 0;
//}
