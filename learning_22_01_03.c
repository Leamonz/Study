#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void convert(char* cnum, int num[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		cnum[i] = num[i] + '0';
//}
//int add(char* cnum, int sum[], int sz)
//{
//	int len1 = strlen(cnum);
//	for (int i = 0; i < len1; i++)
//	{
//		tmp[len1 - i - 1] = cnum[i] - '0';
//	}
//	int len = max(len1, sz) + 1;
//	for (int j = 0; j < len; j++)
//	{
//		sum[j] += tmp[j] + sum[j];
//		sum[j + 1] = sum[j] / 10;
//		sum[j] %= 10;
//	}
//	for (; len > 0; len--)
//	{
//		if (sum[len] != 0)
//			break;
//	}
//	return len;
//}
//int multiple(char* cnum, int mul[], int sz)
//{
//	int len1 = strlen(cnum);
//	for (int i = 0; i < len1; i++)
//	{
//		tmp[len1 - i - 1] = cnum[i] - '0';
//	}
//	int len = len1 + sz;
//	for(int j=0;j<sz;j++)
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sz1 = 1;//积的位数
//	int sz2 = 0;//和的位数
//	for (int i = 1; i <= n; i++)
//	{
//		int len = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			num[len] = tmp % 10;
//			tmp /= 10;
//			len++;
//		}
//		sz1 = multiple(cnum1, num, len);
//		convert(cnum1, mul, sz1);
//		sz2 = add(cnum1, sum, sz2);
//		convert(cnum2, sum, sz2);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int num[2050] = { 0 };//存放数字
//int mul[2050] = { 1 };
//int t1[2050] = { 0 };
//int sum[2050] = { 0 };
//int t2[2050] = { 0 };
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}
//int multiple(int num[], int mul[], int len1, int len2)
//{
//	int len = len1 + len2;
//	for (int i = 0; i < len1; i++)
//	{
//		for (int j = 0; j < len2; j++)
//		{
//			t1[i + j] += num[i] * mul[j];
//			t1[i + j + 1] += t1[i + j] / 10;
//			t1[i + j] %= 10;
//		}
//	}
//	for (; len > 0; len--)
//	{
//		if (t1[len] != 0)
//			break;
//	}
//	return len + 1;
//}
//int add(int mul[], int sum[], int len1, int len2)
//{
//	int len = max(len1, len2) + 1;
//	for (int i = 0; i < len; i++)
//	{
//		t2[i] += mul[i] + sum[i];
//		t2[i + 1] += t2[i] / 10;
//		t2[i] %= 10;
//	}
//	for (; len > 0; len--)
//	{
//		if (t2[len] != 0)
//			break;
//	}
//	return len + 1;
//}
//void set(int tmp[], int src[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		tmp[i] = src[i];
//	}
//}
//void reset(int tmp[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		tmp[i] = 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sz1 = 1;
//	int sz2 = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		int len = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			num[len] = tmp % 10;
//			tmp /= 10;
//			len++;
//		}
//		sz1 = multiple(num, mul, len, sz1);
//		set(mul, t1, sz1);
//		sz2 = add(mul, sum, sz1, sz2);
//		set(sum, t2, sz2);
//		reset(t1, sz1);
//		reset(t2, sz2);
//	}
//	for (int k = sz2 - 1; k >= 0; k--)
//	{
//		printf("%d", sum[k]);
//	}
//	printf("\n");
//	return 0;
//}

//阶乘取模
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fact = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		fact = (fact * i) % 1000000;
//		sum = (sum + fact) % 1000000;
//	}
//	int output = sum % 1000000;
//	printf("%d\n", output);
//	return 0;
//}

//#include<stdio.h>
//typedef struct stu
//{
//	char name[50];
//	int final;
//	int class;
//	char position;
//	char west;
//	int essay;
//}stu;
//stu stus[105];
//int per[105];//每个人的奖金
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %c %c %d", &stus[i].name, &stus[i].final, &stus[i].class, &stus[i].position, &stus[i].west, &stus[i].essay);
//	}
//	int max = 0;//最多奖金
//	int sum = 0;//奖金之和
//	int max_position = 0;
//	for (int j = 0; j < n; j++)
//	{
//		if (stus[j].final > 80 && stus[j].essay >= 1)
//			per[j] += 8000;//院士奖学金
//		if (stus[j].final > 85 && stus[j].class > 80)
//			per[j] += 4000;//五四奖学金
//		if (stus[j].final > 90)
//			per[j] += 2000;//成绩优秀奖
//		if (stus[j].final > 85 && stus[j].west == 'Y')
//			per[j] += 1000;//西部奖学金
//		if (stus[j].class > 80 && stus[j].position == 'Y')
//			per[j] += 850;//班级贡献奖
//		if (per[j] > max)
//			max = per[j];
//		sum += per[j];
//	}
//	for (int m = 0; m < n; m++)
//	{
//		if (per[m] == max)
//		{
//			max_position = m;
//			break;
//		}
//	}
//	printf("%s\n", stus[max_position].name);
//	printf("%d\n", max);
//	printf("%d\n", sum);
//	return 0;
//}

//约瑟夫环
//#include<stdio.h>
//int arr[1005];
//void set(int arr[], int sz)
//{
//	for (int i = 1; i <= sz; i++)
//		arr[i] = 1;
//}
//int main()
//{
//	int n, k;
//	while (1)
//	{
//		scanf("%d%d", &n, &k);
//		if (n == 0 || k == 0)
//		{
//			printf("End Of Input\n");
//			break;
//		}
//		else if (k >= n || n < 3 || k < 3 || n>1000)
//			printf("Input Error\n");
//		else
//		{
//			int count = 0;//统计退圈的人数
//			int flag = 1;//编号
//			int c = 1;//报的数
//			set(arr, n);
//			while (count != n)
//			{
//				if (arr[flag] == 0)
//				{
//					if (flag == n)
//						flag = 1;
//					else
//						flag++;
//					continue;
//				}
//				if (c == k)
//				{
//					arr[flag] = 0;
//					c = 1;
//					count++;
//					if (flag == n)
//						flag = 1;
//					else
//						flag++;
//					continue;
//				}
//				c++;
//				if (flag == n)
//					flag = 1;
//				else
//					flag++;
//			}
//			if (flag == 1)
//				printf("%d\n", n);
//			else
//				printf("%d\n", flag - 1);
//		}
//	}
//	return 0;
//}

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
//	if (n == 0)
//		printf("n/a");
//	else
//	{
//		float avg = 0;
//		int sum = 0;
//		for (int j = 0; j < tmp; j++)
//		{
//			sum += num[j];
//		}
//		avg = sum / (n * 1.0);
//		printf("%.2f\n", avg);
//	}
//	return 0;
//}
