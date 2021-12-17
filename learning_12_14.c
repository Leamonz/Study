#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, k;
//	int i, j, m, l, p, q;
//	while (scanf("%d %d", &n, &k) != EOF)
//	{
//		int count = 0;
//		for (i = 1; i <= n; i++)
//		{
//			if ((i == n) && (k == 1))
//				count++;
//			for (j = i; (j <= n - i) && (k >= 2); j++)
//			{
//				if ((i + j == n) && (k == 2))
//					count++;
//				for (m = j; (m <= n - i - j) && (k >= 3); m++)
//				{
//					if ((i + j + m == n) && (k == 3))
//						count++;
//					for (l = m; (l <= n - i - j - m) && (k >= 4); l++)
//					{
//						if ((i + j + m + l == n) && (k == 4))
//							count++;
//						for (p = l; (p <= n - i - j - m - l) && (k >= 5); p++)
//						{
//							if ((i + j + m + l + p == n) && (k == 5))
//								count++;
//							for (q = p; (q <= n - i - j - m - l - p) && (k >= 6); q++)
//							{
//								if ((i + j + m + l + p + q == n) && (k == 6))
//									count++;
//							}
//						}
//					}
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//typedef struct stu
//{
//	char name[10];
//	char ID[20];
//	char score[5];
//}stu;
//void swap(stu* p1, stu* p2)
//{
//	char tmp[20] = { 0 };
//	strcpy(tmp, p1->name);
//	strcpy(p1->name, p2->name);
//	strcpy(p2->name, tmp);
//	strcpy(tmp, p1->ID);
//	strcpy(p1->ID, p2->ID);
//	strcpy(p2->ID, tmp);
//	strcpy(tmp, p1->score);
//	strcpy(p1->score, p2->score);
//	strcpy(p2->score, tmp);
//}
//void sort(stu* p, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			int len1 = strlen((p + j)->score);
//			int len2 = strlen((p + j + 1)->score);
//			if ((strcmp((p + j)->score, (p + j + 1)->score) < 0) && (len1 == len2))
//			{
//				swap(p + j, p + j + 1);
//			}
//			else if ((len1 < len2)&&((strcmp((p + j + 1)->score, "n/a") != 0) && (strcmp((p + j + 1)->score, "n/a") != 0)))
//			{
//				swap(p + j, p + j + 1);
//			}
//			else if ((strcmp((p + j)->score, "n/a") == 0) && (strcmp((p + j + 1)->score, "n/a") != 0))
//			{
//				swap(p + j, p + j + 1);
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	char target[20] = { 0 };
//	stu arr[100] = { 0 };
//	scanf("%d %s", &n, target);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %s", arr[i].name, arr[i].ID, arr[i].score);
//	}
//	sort(arr, n);
//	for (int j = 0; j < n; j++)
//	{
//		if (((strstr(arr[j].name, target) != NULL) || (strstr(arr[j].ID, target) != NULL) || (strcmp(arr[j].score, target) == 0)) && (strcmp(arr[j].score, "n/a")!=0))
//		{
//			if (strcmp(arr[j].score, arr[j - 1].score) != 0)
//				printf("%s %s %s %d\n", arr[j].name, arr[j].ID, arr[j].score, j + 1);
//			else
//				printf("%s %s %s\n", arr[j].name, arr[j].ID, arr[j].score);
//		}
//		if (((strstr(arr[j].name, target) != NULL) || (strstr(arr[j].ID, target) != NULL) || (strcmp(arr[j].score, target) == 0)) && (strcmp(arr[j].score, "n/a") == 0))
//		{
//			if (strcmp(arr[j].score, arr[j - 1].score) != 0)
//				printf("%s %s %s %s\n", arr[j].name, arr[j].ID, arr[j].score, arr[j].score);
//			else
//				printf("%s %s %s\n", arr[j].name, arr[j].ID, arr[j].score);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int group(int n, int k)
//{
//	int sum = 0;
//	for (; k > 0; k--)
//	{
//		if (k == 1 || n == 1)
//		{
//			sum = sum + 1;
//		}
//		else if (n == k)
//		{
//			sum = sum + 1;
//		}
//		else
//		{
//			if (n - k > k)
//			{
//				sum = sum + group(n - k, k);
//			}
//			else
//			{
//				sum = sum + group(n - k, n - k);
//			}
//		}
//	}
//	return sum;
//}
//int main(void)
//{
//	int n, k;
//	while (1)
//	{
//		scanf("%d %d", &n, &k);
//		if (n == 0)
//			break;
//		printf("%d\n", group(n - k, k));
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int group(int n, int k)
//{
//	int sum = 0;
//	for (; k > 0; k--)
//	{
//		if (k == 1)
//		{
//			sum = sum + 1;
//		}
//		else if (n == 1)
//		{
//			return sum + 1;
//		}
//		else if (n == k)
//		{
//			sum = sum + 1;
//		}
//		else
//		{
//			if (n - k > k)
//			{
//				sum = sum + group(n - k, k);
//			}
//			else
//			{
//				sum = sum + group(n - k, n - k);
//			}
//		}
//	}
//	return sum;
//}
//int main(void)
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", group(n - k, k));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (n++ <= 2)
//	{
//		printf("%d", n);
//	}
//	return 0;
//}

#include<stdio.h>
int fenzu(int x, int y, int z)
{
	if (y == 1)
		return 1;
	if (x == y)
		return 1;
	if (x / y < z)
		return 0;
	int  n, m;
	n = 0;
	if (y == 2)
		return x / 2 - z + 1;
	else
	{
		for (m = z; m <= x / y; m++)
		{
			z = m;
			n = n + fenzu(x - m, y - 1, z);
		}
		return n;
	}
}
int main()
{
	int a, b, c;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", fenzu(a, b, 1));
	}
	return 0;
}