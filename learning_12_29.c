#define _CRT_SECURE_NO_WARNINGS
//�����Լɪ��
//#include<stdio.h>
//int arr[105] = { 0 };
//void set(int arr[], int sz)
//{
//	for (int i = 1; i <= sz; i++)
//		arr[i] = 1;
//}
//int check(int arr[], int sz)//����Ƿ������˶���Ȧ��
//{
//	for (int i = 1; i <= sz; i++)
//	{
//		if (arr[i] == 1)
//			return 0;//����û��Ȧ
//	}
//	return 1;//�����˶���Ȧ��
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	set(arr, n);
//	int c = 1;
//	int flag = 1;
//	while (check(arr, n) != 1)
//	{
//		if (arr[flag] == 0)
//		{
//			if (flag == n)
//				flag = 1;
//			else
//				flag++;
//			continue;
//		}//�Ѿ���Ȧ����������
//		if (c == m)
//		{
//			arr[flag] = 0;
//			printf("%d ", flag);
//			c = 1;
//			if (flag == n)
//				flag = 1;
//			else
//				flag++;
//			continue;//������m�������Ȧ���Ҵ�ӡ���
//		}
//		if (flag == n)
//		{
//			flag = 1;
//			c++;
//			continue;
//		}
//		c++;
//		flag++;
//	}
//	printf("\n");
//	return 0;
//}

//�ݹ��Լɪ��
//#include<stdio.h>
//int joseph(int n, int m, int i)
//{
//	if (i == 1)
//		return (m - 1 + n) % n;
//	else
//		return (joseph(n - 1, m, i - 1) + m) % n;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)
//		printf("%d ", joseph(n, m, i) + 1);
//	printf("\n");
//	return 0;
//}

//ѡ������
//void select_sort(int arr[], int sz)
//{
//	int min = 0;
//	int min_position;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		min = arr[i];
//		min_position = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j];
//				min_position = j;
//			}
//		}
//		arr[min_position] = arr[i];
//		arr[i] = min;
//	}
//}

//��������
//#include<stdio.h>
//void insertion_sort(int arr[], int sz)
//{
//	int flag = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			flag = i + 1;
//			break;//�ҵ����򲿷ֿ�ʼ�ĵط�����¼
//		}
//	}
//	for (int j = flag; j < sz; j++)
//	{
//		for (int k = j - 1; k >= 0; k--)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}//�����򲿷ֵ����ֲ��뵽���򲿷�
//}
//int main()
//{
//	int arr[10] = { 10,3,13,18,98,28,33,7,43,16 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	insertion_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}