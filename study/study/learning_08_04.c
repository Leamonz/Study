#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��򵥵ĵݹ飬�����ջ����Ĵ���
//int main()
//{
//	printf("Hello World!\n");
//	main();
//	return 0;
//}
//���ú����ĵݹ�ʵ������1234�����1 2 3 4
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
//Ū���߼�
//ģ��ʵ��һ��strlen()����
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
//ģ��ʵ��һ��strlen()��������������ʱ����
//���õݹ�
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
//	scanf("%d",&n);//����1234
//	print(n);//��ӡ1 2 3 4
//	return 0;
//}