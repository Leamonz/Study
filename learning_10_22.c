#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>//可以查看整型的范围
#include<float.h>//可以查看浮点型数的范围
#include<stdlib.h>
#include<string.h>
//int main()
//{
//double d = 1E10;
//printf("%lf\n", d);
//return 0;
//}
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值是：%d\n", n);
//	printf("*pFloat的值是：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n的值是：%d\n", n);
//	printf("*pFloat的值是：%f\n", *pFloat);
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	int digits = 0;
//	printf("input = ");
//	scanf("%d", &input);
//	int tmp = input;
//	while (tmp != 0)
//	{
//		tmp = tmp / 10;
//		digits++;
//	}
//	if (input == 0)
//	{
//		digits = 1;
//	}
//	printf("The number %d has %d digits\n", input, digits);
//	return 0;
//}


//int main()
//{
//	int hour = 0;
//	int minute = 0;
//	printf("Enter a 24-hour time:");
//	scanf("%d:%d", &hour, &minute);
//	if (hour > 12)
//		printf("Equivalent 12-hour time: %d:%02d PM\n", hour - 12, minute);
//	else
//		printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
//	return 0;
//}


//int main()
//{
//	system("shutdown -s -t 30");
//	char pwd[] = "";
//	again1:
//	printf("你的电脑将在30秒后关机，请输入\"张珣是猪\"取消关机：\n");
//	scanf("%s", &pwd);
//	if (strcmp(pwd, "张珣是猪") != 0)
//	{
//		printf("我觉得不对，请重新输入：\n");
//		goto again1;
//	}
//	else
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}