#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[100] = "";
//	gets(str);//接收一行放进str中
//	/*scanf("%s", &str);*/
//	reverse(str);
//	printf("%s\n", str);
//	return 0;-
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int sum = 0;
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int Pow(int exp, int pow)
//{
//	if (pow == 0)
//		return 1;
//	else
//		return exp * Pow(exp, pow - 1);
//}
//int bit_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n / 10;
//		count++;
//	}
//	return count;
//}
//int judge(int n, int bit)
//{
//	int arr[6] = { 0 };
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		//2.取出n的每一位数
//		arr[i] = tmp % 10;
//		tmp = tmp / 10;
//		i++;
//		count++;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		//3.计算每一位数的bit次幂（bit为n的位数）
//		sum += Pow(arr[i], bit);
//	}
//	if (sum == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	for (int n = 1; n <= 100000; n++)
//	{
//		//1.n的位数
//		int ret = bit_count(n);
//		if (judge(n, ret) == 1)
//			printf("%d ", n);
//		else
//			continue;
//	}
//	return 0;
//}