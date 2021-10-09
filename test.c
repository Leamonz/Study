#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 0;
//	printf("请输入要查找的数字：");
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到该数字\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch[10] = "hello";
//	printf("%s\n", ch);
//	strcpy(ch, "Hello World");//更改字符串的内容
//	printf("%s\n", ch);
//	return 0;
//}
//打印1--100的所有奇数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else
//		{
//			;
//		}
//	}
//	printf("\n共有%d个奇数\n", count);
//	return 0;
//}
//switch语句
//int main()
//{
//	int day = 0;
//	while (day > 7 || day < 1)
//	{
//		scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	char password[20] = "";
//	printf("请输入密码：");
//	scanf("%s", &password);
//	printf("请确认密码(Y/N)：");
//	ret = getchar();
//	while ((ret = getchar()) != '\n')
//	{
//		if (ret = 'Y')
//		{
//			printf("确认成功\n");
//		}
//		else
//		{
//			printf("放弃确认\n");
//		}
//	}
//	return 0;
//}
//errorrrrrrrrrrrrrrrrrrr
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	while (j <= 10)
//	{
//		printf("%d ", j);
//		j++;
//	}
//	printf("\n");
//	do
//	{
//		printf("%d ", k);
//		k++;
//	} while (k <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("请输入要计算的数字:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d的阶乘是%d\n", n, ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1, ret=1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int input = 0;
//	printf("请输入要查找的数字:");
//	scanf("%d", &input);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > input)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < input)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到该数字\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "************";
//	char arr2[20] = "Hello World!";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s", arr1);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char password[20] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", &password);
//		if (0 == strcmp(password, "20030314"))
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("连续三次密码输入错误，退出登录\n");
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = "";
//	char input[20] = "";
//	printf("请输入密码:");
//	scanf("%s", &password);
//again1:
//	printf("请确认密码:");
//	scanf("%s", &input);
//	if (strcmp(input, password) == 0)
//	{
//	again2:
//		printf("请再次确认密码:");
//		scanf("%s", &input);
//		if (strcmp(input, password) == 0)
//		{
//			printf("三次密码输入相同，注册成功\n");
//		}
//		else
//		{
//			printf("密码与之前输入不符,请重新输入\n");
//			goto again2;
//		}
//	}
//	else
//	{
//		printf("密码与之前输入不符,请重新输入\n");
//		goto again1;
//	}
//	return 0;
//}
//打印1000--2000内的所有闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ",i);
//			count++;
//		}
//		else
//		{
//			;
//		}
//	}
//	printf("\n共有%d个闰年\n", count);
//	return 0;
//}
//打印1--100之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
	//for (i = 2; i <= 100; i++)
	//{
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j > sqrt(i))
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
//	}
//	printf("\n共有%d个素数\n", count);
//	return 0;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("****1.PLAY  0.QUIT****\n");
//	printf("**********************\n");
//}
//void game()
//{
//	int num = rand()%100;
//	int ret = 0;
//	while (ret != num)
//	{
//		printf("开始猜数字:");
//		scanf("%d", &ret);
//		if (ret > num)
//		{
//			printf("猜大了\n");
//		}
//		else if (ret < num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		printf("请选择是否开始游戏(1/0):");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input != 0);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("\na = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
