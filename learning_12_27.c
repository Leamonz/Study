#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, a, b, c;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (a % b == 0)
//		{
//			printf("%d.", a / b);
//			for (int j = 0; j < c; j++)
//				printf("%d", 0);
//		}
//		else
//		{
//			printf("%d.", a / b);
//			int tmp = a % 10;
//			int bit = 0;
//			for (int j = 0; j < c; j++)
//			{
//				bit = (tmp * 10) / b;
//				if (j == c - 1)
//				{
//					tmp = tmp * 10 - b * bit;
//					int t = (tmp * 10) / b;
//					if (t >= 5)
//						bit += 1;
//				}//四舍五入，只在计算最后一位时考虑
//				if (bit > 9)
//					printf("%d", 9);
//				else
//					printf("%d", bit);
//				tmp = tmp * 10 - b * bit;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//	}
//	return 0;
//}

//高精度加法
//#include<stdio.h>
//#include<string.h>
//char cnum1[10000];//用来接收第一个数
//char cnum2[10000];//用来接收第二个数
//int num1[10000];
//int num2[10000];
//int sum[10001];//存放和的每一位数字
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}
//int main()
//{
//	scanf("%s%s", &cnum1, &cnum2);
//	int len1 = strlen(cnum1);
//	int len2 = strlen(cnum2);
//	for (int i = 0; i < len1; i++)
//	{
//		num1[len1 - i - 1] = cnum1[i] - '0';//将字符转换为数字并转置
//	}
//	for (int j = 0; j < len2; j++)
//	{
//		num2[len2 - j - 1] = cnum2[j] - '0';
//	}
//	int len = max(len1, len2);
//	for (int k = 0; k < len; k++)
//	{
//		sum[k] += num1[k] + num2[k];//考虑到来自前一位的进位，这里使用+=进行累加操作
//		sum[k + 1] = sum[k] / 10;//将进位加到下一位数字中
//		sum[k] = sum[k] % 10;//保证这一位数字<10
//	}
//	for (; len > 0; len--)
//	{
//		if (sum[len] != 0)//删除前导0
//			break;
//	}
//	for (int p = len; p >= 0; p--)
//	{
//		printf("%d", sum[p]);//倒序打印数组
//	}
//	printf("\n");
//	return 0;
//}

//高精度减法
//#include<stdio.h>
//#include<string.h>
//char cnum1[20000];//用来接收第一个数
//char cnum2[20000];//用来接收第二个数
//char tmp[20000];
//int num1[20000];
//int num2[20000];
//int sub[20001];//存放差的每一位数字
//int flag = 0;//标志，如果num1<num2则flag==1
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}
//int compare(const char* str1, const char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 < len2)
//		return -1;
//	else if (len1 > len2)
//		return 1;
//	else
//		return strcmp(str1, str2);
//}//比较两个数的大小
//int main()
//{
//	scanf("%s%s", &cnum1, &cnum2);
//	int len1 = strlen(cnum1);
//	int len2 = strlen(cnum2);
//	if (compare(cnum1, cnum2) < 0)
//	{
//		strcpy(tmp, cnum1);
//		strcpy(cnum1, cnum2);
//		strcpy(cnum2, tmp);
//		len1 = strlen(cnum1);
//		len2 = strlen(cnum2);
//		flag = 1;//当num1<num2时，交换两个数字（利用strcpy）
//	}
//	for (int i = 0; i < len1; i++)
//	{
//		num1[len1 - i - 1] = cnum1[i] - '0';//将字符转换为数字并且进行转置
//	}
//	for (int j = 0; j < len2; j++)
//	{
//		num2[len2 - j - 1] = cnum2[j] - '0';
//	}
//	int len = max(len1, len2);
//	for (int k = 0; k < len; k++)
//	{
//		if ((num1[k] < num2[k]) && (k < len - 1))
//		{
//			num1[k + 1]--;
//			num1[k] += 10;
//		}
//		sub[k] = num1[k] - num2[k];
//	}
//	for (; len > 0; len--)
//	{
//		if (sub[len] != 0)//删除前导0
//			break;
//	}
//	if (flag == 1)
//		printf("-");//如果num1<num2则在差的最前面直接输出一个负号
//	for (int p = len; p >= 0; p--)
//	{
//		printf("%d", sub[p]);//倒序打印数组
//	}
//	printf("\n");
//	return 0;
//}

//高精度乘法
//#include<stdio.h>
//#include<string.h>
//char cnum1[20000];
//char cnum2[20000];
//int num1[20000];
//int num2[20000];
//int mul[20000];
//int max(int x, int y)
//{
//	return x <= y ? x : y;
//}
//int main()
//{
//	scanf("%s%s", &cnum1, &cnum2);
//	int len1 = strlen(cnum1);
//	int len2 = strlen(cnum2);
//	for (int i = 0; i < len1; i++)
//	{
//		num1[len1 - i - 1] = cnum1[i] - '0';
//	}
//	for (int j = 0; j < len2; j++)
//	{
//		num2[len2 - j - 1] = cnum2[j] - '0';
//	}
//	int len = len1 + len2;//两个数相乘，积的位数最长不会超过两个数的位数之和
//	for (int k = 0; k < len; k++)
//	{
//		for (int l = 0; l < len; l++)
//		{
//			mul[k + l ] += num2[k] * num1[l];
//			mul[k + l + 1] += mul[k + l] / 10;
//			mul[k + l] = mul[k + l] % 10;
//		}
//	}
//	for (; len > 0; len--)
//	{
//		if (mul[len] != 0)
//			break;
//	}
//	for (int p = len; p >= 0; p--)
//	{
//		printf("%d", mul[p]);
//	}
//	printf("\n");
//	return 0;
//}

//高精度除法（高精度除以低精度）
//#include<stdio.h>
//#include<string.h>
//char cnum1[2000];
//long long num1[2000];
//long long div[2000];
//int main()
//{
//	long long num2;
//	scanf("%s%lld", &cnum1, &num2);
//	int len1 = strlen(cnum1);
//	for (int i = 0; i < len1; i++)
//	{
//		num1[i] = cnum1[i] - '0';//将字符转化为数字，但是不需要转置
//	}
//	for (int j = 0; j < len1; j++)
//	{
//		div[j] = num1[j] / num2;
//		num1[j + 1] = num1[j + 1] + (num1[j] % num2) * 10;//计算商的每一位并存在数组中
//	}
//	int len = 0;
//	for (len = 0; len < len1; len++)
//	{
//		if (div[len] != 0)
//			break;//删除前导0
//	}
//	for (int k = len; k < len1; k++)
//	{
//		printf("%lld", div[k]);
//	}
//	printf("\n");
//	return 0;
//}

