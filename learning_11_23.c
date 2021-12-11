#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1指向字符串后追加它本身
//	strncat(str1, str1, len1);
//	//2.判断str2指向的字符串是否为str1指向的字符串的子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[100] = "abcdef";
//	char arr2[100] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//计数器
//int my_strlen2(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(str + 1);
//}//递归
//int my_strlen3(char* str)
//{
//	char* p = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - p;
//}//指针-指针
//int main()
//{
//	char arr[100] = "hello_world";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//	printf("%d\n", my_strlen3(arr));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>//头文件后缀.h 
//int main()
//{
//	int l, k, y, n, A, B, C, j = 0, i;//J用来求每一列的时间 
//	char ch[100] = "";//每个队伍的ABC种人 
//	int s[100] = { 0 };//每一队的时间     --  定义数组时数组大小不能用变量
//	scanf("%d %d %d %d", &l, &k, &y, &n);
//	getchar();//接收换行符'\n'
//	A = l + k + y;
//	B = 2 * l + k;
//	C = 3 * l + 3 * k + 2 * y;//不同人的时间 
//	for (i = 0; i < n; i++)//第n列
//	{
//		scanf("%s", &ch);//输入n列的人 -- 需要取地址
//		for (int m = 0; ch[m] != '\0'; m++)
//		{
//			if (ch[m] == 'A')
//			{
//				j += A;
//			}
//			else if (ch[m] == 'B')
//			{
//				j += B;
//			}
//			else if (ch[m] == 'C')
//			{
//				j += C;
//			}
//		}//计算每一列的时间 
//		s[i] = j;//将时间存入数组 
//		j = 0; //归零 
//	}
//	int a = 0;
//	int b = n - 1;
//	while (b >= 1)//b未初始化，会赋一个随机值
//	{
//		if (s[b] > s[b - 1])
//		{
//			a = s[b - 1];
//		}
//		else if (s[b] < s[b - 1])
//		{
//			a = s[b];
//		}
//		b--;
//	}//排序，将最小值赋予a 
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	int i = 0;
//	char* p = dest;
//	do
//	{
//		*(dest + i) = *(src + i);
//		i++;
//	} while (*(dest + i));
//	//返回目的空间的起始地址
//	return dest;
//}
//int main()
//{
//	char str1[100] = "hello";
//	char str2[100] = "world";
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}