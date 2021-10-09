#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//最简单的递归，会出现栈溢出的错误
//int main()
//{
//	printf("Hello World!\n");
//	main();
//	return 0;
//}
//运用函数的递归实现输入1234，输出1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}
//弄清逻辑
//模拟实现一个strlen()函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//模拟实现一个strlen()函数但不创建临时变量
//利用递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("length = %d\n",len);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);//输入1234
//	print(n);//打印1 2 3 4
//	return 0;
//}