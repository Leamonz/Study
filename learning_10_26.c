#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//int GCD(int x, int y)
//{
//	if (y == 0)
//		return x;
//	else
//	{
//		int tmp = x % y;
//		x = y;
//		y = tmp;
//		return GCD(x, y);
//	}
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("Enter two integrates:");
//	scanf("%d %d", &m, &n);
//	printf("Greatest common divisor:%d\n", GCD(m, n));
//	return 0;
//}

//int main()
//{
//	system("shutdown -s -t 60");
//	printf("你的电脑将在60秒后关机，输入张珣是猪以停止关机:\n");
//	char pwd[] = "";
//	again:
//	scanf("%s", &pwd);
//	if (strcmp(pwd, "张珣是猪") != 0)
//	{
//		printf("我觉得不对，重新输入\n");
//		goto again;
//	}
//	else
//		system("shutdown -a");
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("Enter a fraction:");
//	scanf("%d/%d", &m, &n);
//	int ret = GCD(m, n);
//	printf("In lowest terms:%d/%d", m / ret, n / ret);
//	return 0;
//}


//int main()
//{
//	int v[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	int sz = sizeof(v) / sizeof(v[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("输入要寻找的数字：");
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (v[mid] > num)
//			right = mid - 1;
//		else if (v[mid] < num)
//			left = mid + 1;
//		else
//		{
//			printf("该数字下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("-1\n");
//	return 0;
//}


//int main()
//{
//	char str1[] = "************";
//	char str2[] = "Hello World!";
//	int len = strlen(str1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		printf("%s", str1);
//		str1[left] = str2[left];
//		str1[right] = str2[right];
//		left++;
//		right--;
//		Sleep(250);
//		system("cls");
//	}
//	printf("%s\n", str1);
//	return 0;
//}


//void bubble_sort(char* v, int len)
//{
//	for (int n = 0; n < len - 1; n++)
//	{
//		for (int i = 0; i < len - 1; i++)
//		{
//			if (v[i] > v[i + 1])
//			{
//				char tmp = v[i + 1];
//				v[i + 1] = v[i];
//				v[i] = tmp;
//			}
//			else
//				continue;
//		}
//	}
//}
//int main()
//{
//	char v[] = "ASRDOQIBCF";
//	int len = strlen(v);
//	bubble_sort(v, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", v[i]);
//	}
//	return 0;
//}



//int main()
//{
//	char str1[] = "************";
//	char str2[] = "Hello World!";
//	int right = strlen(str1) - 1;
//	int left = 0;
//	do
//	{
//		str1[left] = str2[left];
//		str1[right] = str2[right];
//		left++;
//		right--;
//	} while (left <= right);
//	printf("%s\n", str1);
//	return 0;
//}


//double fact(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fact(n - 1);
//}
//double sum(int n)
//{
//	if (n == 1)
//		return 1.0;
//	else
//		return 1.0 / fact(n) + 1.0 / fact(n - 1);
//}
//int main()
//{
//	int n = 0;
//	printf("n = ");
//	scanf("%d", &n);
//	printf("e = %.5lf", (double)(1 + sum(n)));
//	return 0;
//}