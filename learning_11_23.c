#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1ָ���ַ�����׷��������
//	strncat(str1, str1, len1);
//	//2.�ж�str2ָ����ַ����Ƿ�Ϊstr1ָ����ַ������Ӵ�
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
//}//������
//int my_strlen2(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(str + 1);
//}//�ݹ�
//int my_strlen3(char* str)
//{
//	char* p = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - p;
//}//ָ��-ָ��
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
//#include<string.h>//ͷ�ļ���׺.h 
//int main()
//{
//	int l, k, y, n, A, B, C, j = 0, i;//J������ÿһ�е�ʱ�� 
//	char ch[100] = "";//ÿ�������ABC���� 
//	int s[100] = { 0 };//ÿһ�ӵ�ʱ��     --  ��������ʱ�����С�����ñ���
//	scanf("%d %d %d %d", &l, &k, &y, &n);
//	getchar();//���ջ��з�'\n'
//	A = l + k + y;
//	B = 2 * l + k;
//	C = 3 * l + 3 * k + 2 * y;//��ͬ�˵�ʱ�� 
//	for (i = 0; i < n; i++)//��n��
//	{
//		scanf("%s", &ch);//����n�е��� -- ��Ҫȡ��ַ
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
//		}//����ÿһ�е�ʱ�� 
//		s[i] = j;//��ʱ��������� 
//		j = 0; //���� 
//	}
//	int a = 0;
//	int b = n - 1;
//	while (b >= 1)//bδ��ʼ�����ḳһ�����ֵ
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
//	}//���򣬽���Сֵ����a 
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
//	//����Ŀ�Ŀռ����ʼ��ַ
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