#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//���ֲ��ҷ�
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//��ӡ9*9�˷��ھ���
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
//��ϰ
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
//		printf("����������:");
//		scanf("%s", &input);
//		if ((strcmp(password, input)) == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������������\n");
//			continue;
//		}
//	}
//	if (3 == i)
//	{
//		printf("������������������󣬼����˳�����\n");
//	}
//	return 0;
//}
//��������Ϸ(��1-100�в�����)
//1.��������һ�������
//2.������
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
//	printf("��������:");
//	scanf("%d",&i);
//	while (i != ret)
//	{
//		if (i > ret)
//		{
//			printf("�´��ˣ�����������:");
//			scanf("%d", &i);
//		}
//		else if (i < ret)
//		{
//			printf("��С�ˣ�����������:");
//			scanf("%d", &i);
//		}
//	}
//	if (i == ret)
//	{
//		printf("�¶��ˣ�\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		printf("��ѡ���Ƿ�ʼ��Ϸ:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input != 0);
//	return 0;
//}
//goto���
//һ���ػ�����
//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("���ĵ��Խ���1���Ӻ�ػ�����Ҫȡ���ػ��������롰ȡ���ػ���\n������:");
//	scanf("%s",&input);
//	if ((strcmp(input, "ȡ���ػ�")) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}