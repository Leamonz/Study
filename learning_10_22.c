#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>//���Բ鿴���͵ķ�Χ
#include<float.h>//���Բ鿴���������ķ�Χ
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
//	printf("n��ֵ�ǣ�%d\n", n);
//	printf("*pFloat��ֵ�ǣ�%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n��ֵ�ǣ�%d\n", n);
//	printf("*pFloat��ֵ�ǣ�%f\n", *pFloat);
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
//	printf("��ĵ��Խ���30���ػ���������\"�ū�����\"ȡ���ػ���\n");
//	scanf("%s", &pwd);
//	if (strcmp(pwd, "�ū�����") != 0)
//	{
//		printf("�Ҿ��ò��ԣ����������룺\n");
//		goto again1;
//	}
//	else
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}