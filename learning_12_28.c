#define _CRT_SECURE_NO_WARNINGS
#include<limits.h>
#include<float.h>
//#include<stdio.h>
//#include<string.h>
//char num[50][50];
//int Max[500];
//int compare(char num[50][50], int sz)
//{
//	char max = num[0][0];
//	int max_position = 0;
//	for (int i = 1; i < sz; i++)
//	{
//		if (num[i][0] > max)
//		{
//			max = num[i][0];
//			max_position = i;
//		}
//		else
//		{
//			int len = strlen(num[i]);
//			if (strcmp(num[i], num[max_position]) > 0)
//			{
//				max = num[i][0];
//				max_position = i;
//			}
//		}
//	}
//	return max_position;
//}
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int position = 0;
//	int tmp = position;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &num[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		max = compare(num, n);
//		int len = strlen(num[max]);
//		int k = 0;
//		for (; position < tmp + len; position++)
//		{
//			Max[position] = num[max][k] - '0';
//			k++;
//		}
//		tmp = position;
//		num[max][0] = '0';
//	}
//	for (int m = 0; m < position; m++)
//	{
//		printf("%d", Max[m]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//void set(int arr[], int sz)
//{
//	for (int i = 1; i <= sz; i++)
//		arr[i] = 1;
//}
//int check_good(int arr[], int k)
//{
//	for (int i = 1; i <= k; i++)
//	{
//		if (arr[i] == 0)
//			return 0;//�к��˱�ɱ����
//	}
//	return 1;//���еĻ����ڵ�һ�����˱�ɱ��֮ǰ��ɱ����
//}
//int check_bad(int arr[], int k)
//{
//	for (int j = k + 1; j <= 2 * k; j++)
//	{
//		if (arr[j] == 1)
//			return 0;//�л���û��ɱ��
//	}
//	return 1;//����ȫ����ɱ��
//}
//int main()
//{
//	int k, m;
//	scanf("%d", &k);
//	int arr[30] = { 0 };
//	set(arr, 2 * k);
//	for (m = k + 1;; m++)
//	{
//		int flag = 1;//�����
//		int c = 1;//����������
//		while (check_bad(arr, k) == 0)
//		{
//			if (arr[flag] == 0)
//			{
//				if (flag == 2 * k)
//					flag = 1;
//				else
//				{
//					flag++;
//					continue;
//				}
//			}//�������Ѿ���ɱ���ˣ������������
//			if (c == m)//ɱ��
//			{
//				arr[flag] = 0;
//				c = 1;
//				if ((flag >= 1) && (flag <= k))//�к��˱�ɱ����ֱ�ӽ�����һ��ѭ��,m++
//					break;
//				else
//				{
//					if (flag == 2 * k)
//						flag = 1;
//					else
//						flag++;
//					continue;
//				}
//			}
//			if (flag == 2 * k)
//			{
//				flag = 1;
//				c++;
//				continue;
//			}
//			c++;
//			flag++;
//		}
//		if (check_good(arr, k) == 1)
//			break;
//		else
//			set(arr, 2 * k);
//	}
//	printf("%d\n", m);
//	return 0;
//}

