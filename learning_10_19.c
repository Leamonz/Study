#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*printf("hello world\n");*/
//	printf("\x41");
//	return 0;
//}
//int main()
//{
//	printf("%zd\n", sizeof(unsigned long int));//4
//	printf("%zd\n", sizeof(unsigned long long int));//8
//	printf("%zd\n", sizeof(unsigned int));//4
//	return 0;
//}
//int main()
//{
//	int i = -20;//          11111111 11111111 11111111 11101100--补码
//	unsigned int j = 10;//  00000000 00000000 00000000 00001010--补码
//	printf("%d\n", i + j);//11111111 11111111 11111111 11110110--补码   10000000 00000000 00000000 00001010--原码
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//判断出问题，unsigned int是无符号数，不能小于0，最后会陷入死循环
//	{
//		printf("%u\n", i);
//	}
//	return  0;
//}

//int StrLen(char s[])
//{
//	int i = 0;
//	while (s[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char str[] = "hello world";
//	printf("%d\n", StrLen(str));
//	printf("%d\n", strlen(str));
//	return 0;
//}

//int main()
//{
//	char a[1000];//有符号char能表达的数的范围：-128---127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//对于有符号char，-128-1=127
//	}
//	printf("%d\n", strlen(a));//strlen会一直往后找到\0或0，然后计算\0或0之前的数字
//	return 0;
//}
//
//unsigned char i = 0;//无符号char能表示的数字范围：0----255。对于无符号char,255+1=0
//int main()
//{ 
//	int count = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world!\n");
//		count++;
//	}
//	printf("count = %d\n",count);
//	return 0;
//}

//int main()
//{
//	char i = 'A';
//	printf("%c\n", i + 32);//打印a
//	return 0;
//}