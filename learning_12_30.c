#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int N[250] = { 0 };
//int my_atoi(const char* str)
//{
//	int num = 0;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] >= 48 && str[i] <= 57)
//			N[len - i - 1] = str[i] - '0';
//		else
//			return 0;
//	}
//	for (int j = len - 1; j >= 0; j--)
//	{
//		num += (int)(N[j] * pow(10, j));
//	}
//	return num;
//}
//int main()
//{
//	printf("%d\n", my_atoi("64178"));//48~57
//	return 0;
//}

//#include<stdio.h>
//int a[100][100] = { 0 };
//int b[100][100] = { 0 };//偶数次幂存放在此数组
//int c[100][100] = { 0 };//奇数次幂存放在次数组
//int main()
//{
//	int N, K;
//	scanf("%d%d", &N, &K);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%d", &a[i][j]);//输入矩阵内的数字
//			b[i][j] = a[i][j];
//			c[i][j] = a[i][j];//将两个数组初始化成与a数组相同
//		}
//	}
//	for (int p = 0; p < K - 1; p++)
//	{
//		if (p % 2 == 0)
//		{
//			int i, j;
//			for (i = 0; i < N; i++)
//			{
//				for (j = 0; j < N; j++)
//				{
//					b[i][j] = 0;
//					for (int k = 0; k < N; k++)
//					{
//						b[i][j] += c[i][k] * a[k][j];
//					}
//				}
//			}
//		}
//		else
//		{
//			int i, j;
//			for (i = 0; i < N; i++)
//			{
//				for (j = 0; j < N; j++)
//				{
//					c[i][j] = 0;
//					for (int k = 0; k < N; k++)
//					{
//						c[i][j] += b[i][k] * a[k][j];
//					}
//				}
//			}
//		}
//	}
//	if (K % 2 == 0)
//	{
//		for (int l = 0; l < N; l++)
//		{
//			for (int m = 0; m < N; m++)
//			{
//				printf("%2d ", b[l][m]);
//			}
//			printf("\n");
//		}
//	}
//	else
//	{
//		for (int l = 0; l < N; l++)
//		{
//			for (int m = 0; m < N; m++)
//			{
//				printf("%2d ", c[l][m]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//n/a平均值
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int N[250] = { 0 };
//int num[105] = { 0 };
//int my_atoi(const char* str)
//{
//	int num = 0;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] >= 48 && str[i] <= 57)
//			N[len - i - 1] = str[i] - '0';
//		else
//			return 0;
//	}
//	for (int j = len - 1; j >= 0; j--)
//	{
//		num += (int)(N[j] * pow(10, j));
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char grades[10];
//	int tmp = n;
//	for (int i = 0; i < tmp; i++)
//	{
//		scanf("%s", &grades);
//		num[i] = my_atoi(grades);
//		if (strcmp(grades, "n/a") == 0)
//			n--;
//	}
//	float avg = 0;
//	int sum = 0;
//	for (int j = 0; j < tmp; j++)
//	{
//		sum += num[j];
//	}
//	avg = sum / (n * 1.0);
//	printf("%.2f\n", avg);
//	return 0;
//}

//查找SCU
//#include<stdio.h>
//#include<string.h>
//char ch[105] = { 0 };
//int find_SCU(const char* str)
//{
//	int flag = 0;//找到了SCU则为1，没有找到就是0
//	while(*str!='S')
//	{
//		if (*str != 'A')
//			return 0;
//		else
//			str++;
//	}
//	char* start = str;
//	if (*(start + 1) == 'C' && *(start + 2) == 'U')
//		flag = 1;
//	str += 3;
//	while (*str == 'A')
//		str++;
//	if ((strlen(str) == 0) && (flag == 1))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &ch);
//		if (strcmp(ch, "SCU") == 0)
//			printf("YES\n");
//		else if (find_SCU(ch) == 1)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//查找回文数
//#include<stdio.h>
//#include<string.h>
//char ch[250] = { 0 };
//char num[205][205] = { 0 };
//char rank[205][205] = { 0 };
//int time[205] = { 0 };
//int tmp[205] = { 0 };
//void set(char* str, int len)
//{
//	for (int i = 0; i < len; i++)
//		str[i] = 0;
//}
//int check(char str[], int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		if (str[i] != str[len - i - 1])
//			return 0;
//	}
//	return 1;
//}
//int find_max(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	return arr[0];
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 > len2)
//		return 1;
//	else if (len1 < len2)
//		return 0;
//	else
//		return strcmp(str1, str2);
//}
//void sort(char rank[205][205], int sz)
//{
//	char tmp[205] = { 0 };
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (my_strcmp(rank[j], rank[j + 1]) > 0)
//			{
//				strcpy(tmp, rank[j]);
//				strcpy(rank[j], rank[j + 1]);
//				strcpy(rank[j + 1], tmp);
//			}
//		}
//	}
//}
//int main()
//{
//	int count_num = 0;//统计有几个回文数
//	while (gets(ch) != NULL)
//	{
//		char* find = ch;
//		while (1)
//		{
//			while (*find < 49 || *find>57)
//			{
//				find++;//找到数字
//				if (*find == '\0')
//					break;
//			}
//			int i = 0;
//			if (*find == '\0')
//				break;
//			while (*find >= 49 && *find <= 57)
//			{
//				num[count_num][i] = *find;
//				i++;//把数字存到二维数组中
//				find++;
//			}
//			if (i == 1)
//			{
//				set(num[count_num], strlen(num[count_num]));
//				continue;
//			}
//			if (check(num[count_num], strlen(num[count_num])) == 1)//判断是不是回文数
//				count_num++;//如果是，count++
//			else if (check(num[count_num], strlen(num[count_num])) == 1)
//				set(num[count_num], strlen(num[count_num]));//如果不是，将这一行重置
//		}
//	}
//	//统计每个回文数出现的次数，有相同的就重置掉，并将次数存放在整型数组内
//	for (int i = 0; i < count_num; i++)
//	{
//		if (strlen(num[i]) == 0)
//			continue;
//		for (int j = 0; j < count_num; j++)
//		{
//			if (strcmp(num[i], num[j]) == 0)
//			{
//				time[i]++;
//				if (i != j)
//					set(num[j], strlen(num[j]));
//			}
//		}
//	}
//	for (int i = 0; i < count_num; i++)
//	{
//		tmp[i] = time[i];
//	}
//	int max = find_max(tmp, count_num);
//	int n = 0;
//	for (int j = 0; j < count_num; j++)
//	{
//		if ((time[j] == max) && (strlen(num[j]) > 0))
//		{
//			strcpy(rank[n], num[j]);
//			n++;
//		}
//	}
//	sort(rank, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s %d\n", rank[i], max);
//	}
//	return 0;
//}
//error：如果多个数字出现次数相同如何从小到大依次输出？