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
//	int c = a & b;//��λ��----��1��1
//	int d = a | b;//��λ��----��1��1
//	int e = a ^ b;//��λ���----��ͬΪ0������Ϊ1
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}
//��������ʱ������ʵ���������Ľ���
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("before: a=%d b=%d\n", a, b);
//	//1.�Ӽ���
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//ȱ�ݣ����ܻ��������a��b���Ƿǳ��������ʱ��a+b�õ������ᶪʧһ���ֶ�����λ����������
//	//printf("after : a=%d b=%d\n", a, b);
//	//2.���ķ���----һ��������һ��������������λ�õ�ԭ����
//	//a = a ^ b;
//	//b = a ^ b;//(a^b)^b
//	//a = a ^ b;//(a^b)^[(a^b)^b]
//	//���ַ�������������������
//	//���ڵ����⣺1.����ִ��Ч�ʵ� 2.����Ŀɶ��Ե�
//	printf("after : a=%d b=%d\n", a, b);
//	return 0;
//}
//��д������һ�������洢���ڴ��еĶ���������1�ĸ���----����ǲ���
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
	//��num�Ǹ�����ʱ����������Ǵ����
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
//	printf("%d\n", sizeof(s = a + 5));//��������㲢������У�����s��ֵ��û�б仯�������sizeofʵ���ϼ������short�Ĵ�С
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
//	//printf("%d\n", ~a);//~----��λ��������λ��ȡ������һ�����Ĳ�����а�λȡ��
//	int a = 10;
//	printf("%d\n", a++);//10----����++
//	printf("%d\n", ++a);//12----ǰ��++
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//ǿ������ת��----(����)
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])//�����ǵ�ַ����ָ��������棬��С��һ��ָ������Ĵ�С
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
