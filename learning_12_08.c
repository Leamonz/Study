#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int height[10000] = { 0 };
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int flag = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &height[i]);
//	}
//	for (int j = 1; j < n - 1; j++)
//	{
//		if ((height[j] < height[j - 1]) && (height[j] == height[j + 1]))
//		{
//			flag = 1;
//			continue;
//		}
//		if ((height[j] < height[j - 1]) && (height[j] < height[j + 1]))
//		{
//			count++;
//			flag = 0;
//		}
//		else if ((height[j] < height[j + 1]) && (flag == 1))
//		{
//			count++;
//			flag = 0;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int arr[10000] = { 0 };
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int num[200] = { 0 };
//	int i = 0;
//	do
//	{
//		scanf("%d", &num[i]);
//		i++;
//	} while ((getchar()) != '\n');
//	int k = 0;
//	for (int j = 1; j <= i; j++)
//	{
//		if (j % 2 == 0)
//		{
//			while (num[j - 1])
//			{
//				arr[k] = 1;
//				k++;
//				num[j - 1]--;
//			}
//			continue;
//		}
//		k += num[j - 1];
//	}
//	for (int l = 0; l < N * N; l++)
//	{
//		printf("%d", arr[l]);
//		if ((l + 1) % N == 0)
//			printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	double money = a + 0.1 * b;
//	int flag = 0;
//	int i = 0;
//	while (flag == 0)
//	{
//		if ((1.9 * i < money) && (1.9 * (i + 1) >= money))
//		{
//			printf("%d\n", i);
//			flag = 1;
//		}
//		else
//			i++;
//	}
//	return 0;
//}