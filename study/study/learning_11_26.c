#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* my_strncpy(char* dest, const char* src,int num)
{
	int i = 0;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
		if (i == num)
			return dest;
	}
	while (i < num)
	{
		*dest = *src;
		dest++;
		i++;
	}
	return dest;
}
char* my_strncat(char* dest, const char* src, int num)
{
	while (*dest)
	{
		dest++;
	}
	for (int i = 0; i < num; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			return dest;
	}
	return dest;
}
int my_strncmp(const char* str1, const char* str2, int num)
{
	for (int i = 0; i < num; i++)
	{
		if (*(str1 + i) == '\0' && *(str2 + i) != '\0')
			return *(str2 + i);
		else if (*(str2 + i) == '\0' && *(str1 + i) != '\0')
			return *(str1 + i);
		if (*(str1 + i) == *(str2 + i))
			continue;
		else 
			return *(str1 + i) - *(str2 + i);
	}
	return 0;
}
char* my_strstr(const char* str1, const char* str2)
{
	char* cur = str1;//��¼ƥ�����ʼλ��
	if (*str2 == '\0')
	{
		return str1;//���ҪѰ�ҵ��Ӵ�Ϊ�գ���ֱ�ӷ���Ŀ���ַ���
	}
	while (*cur)
	{
		char* s1 = cur;
		char* s2 = str2;//�����str1��str2���иĶ�����ΪҪ���ڼ�¼��ʼλ��
		while ((*s2 != '\0') && (*s1 == *s2))//���*s2=='\0'��˵���Ѿ�ƥ����ɣ������ҵ��Ӵ�
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cur;//���ؿ�ʼƥ��ĵ�ַ
	}
	return NULL;//�Ҳ����Ӵ������ؿ�ָ��
}
//int main()
//{
//	char arr1[50] = "abcdefghi";
//	char arr2[] = "abcdf";
//	/*my_strncpy(arr1, arr2, 6);*/
//	/*my_strncat(arr1, arr2, 11);*/
//	int ret = my_strncmp(arr1, arr2, 5);
//	/*printf("%s\n", arr1);*/
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abcdef";
//	char* ret = strstr(str1, str2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ����Ӵ�\n");
//	return 0;
//}
//int main()
//{
//	char str1[] = "3262305069@qq.com";
//	char* p = "@.";
//	for (char* ret = strtok(str1, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}
#include<errno.h>
//int main()
//{
//	//������    ������Ϣ
//	//0      -  No error
//	//1      -  Operation not permitted
//	//2      -  No such file or directory
//	//3      -  No such process
//	//......
//	//errno��һ��ȫ�ֵĴ��������
//	//��C���ԵĿ⺯��ִ�й����з�������ʱ���ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}
#include<ctype.h>
//int main()
//{
//	char str[] = "hello world";
//	int i = 0;
//	while (str[i])
//	{
//		if (islower(str[i]))
//			str[i] = toupper(str[i]);
//		i++;
//	}
//	printf("%s\n", str);
//	return 0;
//}