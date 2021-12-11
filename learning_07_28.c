#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//打印9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//9*1=9 9*2=18...9*9=81
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//复习
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1,ret=1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//////int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1,ret=1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "Hello World!";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
////	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n",arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char password[] = "20030314";
//	char input[] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", &input);
//		if ((strcmp(password, input)) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//			continue;
//		}
//	}
//	if (3 == i)
//	{
//		printf("连续三次密码输入错误，即将退出程序\n");
//	}
//	return 0;
//}
//猜数字游戏(在1-100中猜数字)
//1.电脑生成一个随机数
//2.猜数字
//void menu()
//{
//	printf("*************************************************\n");
//	printf("******TO PLAY->PRESS 1     TO EXIT->PRESS 0******\n");
//	printf("*************************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int i = 0;
//	ret = rand()%100+1;
//	printf("输入数字:");
//	scanf("%d",&i);
//	while (i != ret)
//	{
//		if (i > ret)
//		{
//			printf("猜大了，请重新输入:");
//			scanf("%d", &i);
//		}
//		else if (i < ret)
//		{
//			printf("猜小了，请重新输入:");
//			scanf("%d", &i);
//		}
//	}
//	if (i == ret)
//	{
//		printf("猜对了！\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		printf("请选择是否开始游戏:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input != 0);
//	return 0;
//}
//goto语句
//一个关机程序
//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("您的电脑将在1分钟后关机，若要取消关机，请输入“取消关机”\n请输入:");
//	scanf("%s",&input);
//	if ((strcmp(input, "取消关机")) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}