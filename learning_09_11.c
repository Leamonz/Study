#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int factorial(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int fact = 0;
//	scanf("%d", &n);
//	fact = factorial(n);
//	printf("fact(%d) = %d", n, fact);
//	return 0;
//}
//쳲���������
//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return n - 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}
//�ݹ�����
//int power(int base, int exponent)
//{
//	if (exponent == 1)
//	{
//		return base;
//	}
//	else
//	{
//		return base*power(base, (exponent - 1));
//	}
//}
//int main()
//{
//	int base = 0;
//	int exponent = 0;
//	printf("base = ");
//	scanf("%d", &base);
//	printf("exponent = ");
//	scanf("%d", &exponent);
//	printf("%d\n", power(base, exponent));
//}
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//	//ֻ���ӡc��˵����������������a��b����������������
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4----cֻҪ�����˱��ʽ����ͻᷢ����������
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}