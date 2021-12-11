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
	char* cur = str1;//记录匹配的起始位置
	if (*str2 == '\0')
	{
		return str1;//如果要寻找的子串为空，则直接返回目标字符串
	}
	while (*cur)
	{
		char* s1 = cur;
		char* s2 = str2;//避免对str1和str2进行改动，因为要用于记录起始位置
		while ((*s2 != '\0') && (*s1 == *s2))//如果*s2=='\0'，说明已经匹配完成，可以找到子串
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cur;//返回开始匹配的地址
	}
	return NULL;//找不到子串，返回空指针
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
//		printf("找不到子串\n");
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
//	//错误码    错误信息
//	//0      -  No error
//	//1      -  Operation not permitted
//	//2      -  No such file or directory
//	//3      -  No such process
//	//......
//	//errno是一个全局的错误码变量
//	//当C语言的库函数执行过程中发生错误时，就会把对应的错误码赋值到errno中
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