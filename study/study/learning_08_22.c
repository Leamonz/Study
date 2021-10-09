#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 80;
//	int b = a >> 1;
//	printf("%d",b);
//	return 0;
//}
//int main()
//{
//	int a = 40;
//	int b = a << 1;
//	printf("%d",b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;//按位与----都1才1
//	int d = a | b;//按位或----有1则1
//	int e = a ^ b;//按位异或----相同为0，相异为1
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}
//不创建临时变量，实现两个数的交换
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("before: a=%d b=%d\n", a, b);
//	//1.加减法
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//缺陷：可能会溢出，当a和b都是非常大的数字时，a+b得到的数会丢失一部分二进制位，产生错误
//	//printf("after : a=%d b=%d\n", a, b);
//	//2.异或的方法----一个数和另一个数连续异或两次会得到原数字
//	//a = a ^ b;
//	//b = a ^ b;//(a^b)^b
//	//a = a ^ b;//(a^b)^[(a^b)^b]
//	//这种方法不会产生溢出的问题
//	//存在的问题：1.代码执行效率低 2.代码的可读性低
//	printf("after : a=%d b=%d\n", a, b);
//	return 0;
//}
//编写代码求一个整数存储在内存中的二进制数中1的个数----存的是补码
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
	//while (num != 0)
	//{
	//	if (1 == num % 2)
	//	{
	//		count++;
	//	}
	//	num = num / 2;
	//}
	//当num是负数的时候算出的数是错误的
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num>>i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//这里的运算并不会进行，所以s的值并没有变化。这里的sizeof实际上计算的是short的大小
//	printf("%d\n", s);
//	/*int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(b));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(int [10]));*/
//	return 0;
//}
//int main()
//{
//	//int a = 11;
//	//int b = a | (1 << 2);
//	//printf("%d\n", b);//15
//	//int c = b & 11;
//	//printf("%d\n", c);//11
//	//int d = b & (~(1 << 2));
//	//printf("%d\n", d);//11
//	//int a = 0;
//	//printf("%d\n", ~a);//~----按位（二进制位）取反，对一个数的补码进行按位取反
//	int a = 10;
//	printf("%d\n", a++);//10----后置++
//	printf("%d\n", ++a);//12----前置++
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制类型转换----(类型)
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])//传的是地址，用指针变量储存，大小是一个指针变量的大小
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//8
//	test2(ch);//8
//	return 0;
//}
