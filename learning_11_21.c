#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//ֻ�����ϰ벿������
//	char star[100] = "";
//	//��ӡ�ϰ벿��
//	for (int j = 0; j < 2 * line - 1; j++)
//	{
//		if (j == (2*line + 1) / 2 - 1)
//			star[j] = '*';
//		else
//			star[j] = ' ';
//	}
//	printf("%s\n", star);
//	int left = (2 * line + 1) / 2 - 2;
//	int right = (2 * line + 1) / 2;
//	for (int i = 0; i < line - 1; i++)//i��ʾ��ӡ����
//	{
//		star[left] = '*';
//		star[right] = '*';
//		if (i != line - 2)
//		{
//			left--;
//			right++;
//		}
//		printf("%s\n", star);
//	}
//	//��ӡ�°벿��
//	for (int i = 0; i < line - 1; i++)
//	{
//		star[left] = ' ';
//		star[right] = ' ';
//		if (i != line - 2)
//		{
//			left++;
//			right--;
//		}
//		printf("%s\n", star);
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (int i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (int i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (int j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int sum = input;
//	while (input)
//	{
//		sum += input / 2;
//		input = input / 2;
//		if (input == 1)
//			break;
//	}
//	printf("%d\n", sum);
//	return 0;
//}error

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;//����
//	int empty = total;//��ƿ
//	while (empty >= 2)
//	{
//		total += empty / 2;//��ƿ������ˮ
//		empty = empty % 2 + empty / 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money > 0)
//		total = 2 * money - 1;
//	printf("%d\n", total);
//	return 0;
//}

void swap(char* dest, char* src)
{
	char tmp = *dest;
	*dest = *src;
	*src = tmp;
}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//���������ҵ�һ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���������ҵ�һ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����������
//		if (left < right)
//			swap(&arr[left], &arr[right]);
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	do
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	} while (getchar() != '\n');
//	move(arr, i);
//	for (int j = 0; j < i; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//void move(char arr[], int k)
//{
//	int len = strlen(arr);
//	for (int i = 0; i < k; i++)//ѭ������
//	{
//		for (int j = 0; j < len - 1; j++)
//		{
//			swap(&arr[j], &arr[j + 1]);
//		}
//	}
//}
//int main()
//{
//	int k = 0;
//	char arr[100] = "";
//	gets(arr);
//	printf("k = ");
//	scanf("%d", &k);
//	move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}