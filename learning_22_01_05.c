#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int arr[50005];
//int dp[50005];
//int main()
//{
//	int n = 0;
//	int max = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	dp[0] = 1;
//	max = dp[0];
//	for (int j = 1; j < n; j++)
//	{
//		dp[j] = 1;
//		for (int k = 0; k < j; k++)
//		{
//			if (arr[j] > arr[k])
//				dp[j] = dp[k] + 1;
//		}
//		if (dp[j] > max)
//			max = dp[j];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//typedef struct stu
//{
//	char name[100];
//	char ID[100];
//	char grades[100];
//}stu;
//stu stus[10000];
//int rank[10000];
//int print[10000] = { 0 };
//int main()
//{
//	int n = 0;
//	char target[50];
//	scanf("%d %s", &n, &target);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %s", &stus[i].name, stus[i].ID, stus[i].grades);
//	}
//	//ÅÅÐò
//	for (int j = 0; j < n; j++)
//	{
//		if (strcmp(stus[j].grades, "n/a") == 0)
//			rank[j] = -1;
//		rank[j] = 1;
//		for (int k = 0; k < n; k++)
//		{
//			if (atoi(stus[j].grades) < atoi(stus[k].grades))
//				rank[j]++;
//		}
//	}
//	//²éÕÒ
//	for (int i = 0; i < n; i++)
//	{
//		if (strstr(stus[i].name, target) != NULL || strstr(stus[i].ID, target) != NULL || strstr(stus[i].grades, target) != NULL)
//		{
//			print[i] = 1;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (print[i] == 1)
//		{
//			printf("%s %s %s ", stus[i].name, stus[i].ID, stus[i].grades);
//			if (rank[i] != -1)
//				printf("%d\n", rank[i]);
//			else
//				printf("n/a\n");
//		}
//	}
//	return 0;
//}