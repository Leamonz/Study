#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//char* my_strcat(char* dest, const char* src)
//{
//	int i = 0;
//	while (*(dest + i) != '\0')
//	{
//		i++;
//	}
//	int j = 0;
//	while (*(src + j) != '\0')
//	{
//		*(dest + i) = *(src + j);
//		i++;
//		j++;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	char* str = my_strcat(arr1, arr2);
//	printf("%s\n", str);
//	return 0;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	int i = 0;
//	while ((*(str1 + i) != '\0') || (*(str2 + i) != '\0'))
//	{
//		if (*(str1 + i) > *(str2 + i))
//			return 1;
//		else if (*(str1 + i) == *(str2 + i))
//		{
//			i++;
//			continue;
//		}
//		else if (*(str1 + i) < *(str2 + i))
//			return -1;
//	}
//	return 0;
//}
//int my_strcmp2(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//全部字符比完了并且都相等，则表示两个字符串相等
//		str1++;
//		str2++;
//	}//找到不同的字符
//	if (*str1 > *str2)//只需要对不同的字符进行比较即可
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = my_strcmp2(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}