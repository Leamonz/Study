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
//	int i = -20;//          11111111 11111111 11111111 11101100--����
//	unsigned int j = 10;//  00000000 00000000 00000000 00001010--����
//	printf("%d\n", i + j);//11111111 11111111 11111111 11110110--����   10000000 00000000 00000000 00001010--ԭ��
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//�жϳ����⣬unsigned int���޷�����������С��0������������ѭ��
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
//	char a[1000];//�з���char�ܱ������ķ�Χ��-128---127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//�����з���char��-128-1=127
//	}
//	printf("%d\n", strlen(a));//strlen��һֱ�����ҵ�\0��0��Ȼ�����\0��0֮ǰ������
//	return 0;
//}
//
//unsigned char i = 0;//�޷���char�ܱ�ʾ�����ַ�Χ��0----255�������޷���char,255+1=0
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
//	printf("%c\n", i + 32);//��ӡa
//	return 0;
//}