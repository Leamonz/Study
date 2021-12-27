#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int v1[1000] = { 0 };
//int t1[1000] = { 0 };//SH
//int v2[1000] = { 0 };
//int t2[1000] = { 0 };//KC
//int main()
//{
//	int time = 0;
//	int N, M;
//	scanf("%d%d", &N, &M);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d%d", &v1[i], &t1[i]);
//		time += t1[i];
//	}
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d%d", &v2[i], &t2[i]);
//	}
//	int sh = 0;
//	int kc = 0;
//	int sum1 = v1[sh];//SH
//	int sum2 = v2[kc];//KC
//	int count = 0;
//	int flag = 0;//0---SH领先,1---KC领先
//	if (v1[sh] > v2[kc])
//	{
//		flag = 0;
//		t1[sh]--;
//		t2[kc]--;
//	}
//	else if (v1[sh] < v2[kc])
//	{
//		flag = 1;
//		t1[sh]--;
//		t2[kc]--;
//	}
//	for (int j = 2; j <= time; j++)
//	{
//		if (t1[sh] == 0)
//			sh++;
//		if (t2[kc] == 0)
//			kc++;
//		sum1 += v1[sh];
//		sum2 += v2[kc];
//		if ((sum1 > sum2) && (flag == 1))
//		{
//			flag = 0;
//			count++;
//		}
//		else if ((sum1 < sum2) && (flag == 0))
//		{
//			flag = 1;
//			count++;
//		}
//		t1[sh]--;
//		t2[kc]--;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//enum wa
//{
//	zero,
//	first,
//	second
//}num1;
//int main()
//{
//	int i = zero;
//	num1 = first;
//	printf("%d", num1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int max = 0;
//	int min = 0;
//	int num[20] = { 0 };
//	char ch[20] = { 0 };
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%c", &num[i], &ch[i]);
//		if (num[i] > max)
//			max = num[i];
//		if (num[i] < min)
//			min = num[i];
//		if ((ch[i] == ' ') || (ch[i] == '\n'))
//			ch[i] = '+';
//	}
//	for (int k = max; k >= min; k--)
//	{
//		if (k == 0)
//		{
//			for (int l = 0; l < 2 * m - 1; l++)
//			{
//				printf("-");
//			}
//			printf("\n");
//		}
//		else if (k > 0)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (num[j] >= k)
//					printf("%c ", ch[j]);
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (num[j] <= k)
//					printf("%c ", ch[j]);
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = '0';
//	char tmp = '0';
//	char anum = '0';
//	char bnum = '0';
//	char cnum = '0';
//	while (scanf("%c:=%c;", &ch, &tmp) != EOF)
//	{
//		if (ch == '\n')
//			break;
//		if (ch == 'a')
//		{
//			if (tmp == 'a')
//				;
//			else if (tmp == 'b')
//				anum = bnum;
//			else if (tmp == 'c')
//				anum = cnum;
//			else
//				anum = tmp;
//		}
//		else if (ch == 'b')
//		{
//			if (tmp == 'a')
//				bnum = anum;
//			else if (tmp == 'b')
//				;
//			else if (tmp == 'c')
//				bnum = cnum;
//			else
//				bnum = tmp;
//		}
//		else if (ch == 'c')
//		{
//			if (tmp == 'a')
//				cnum = anum;
//			else if (tmp == 'b')
//				cnum=bnum;
//			else if (tmp == 'c')
//				;
//			else
//				cnum = tmp;
//		}
//	}
//	printf("%c %c %c\n", anum, bnum, cnum);
//	return 0;
//}

//#include<stdio.h>
//int ache[10000] = { 0 };
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &ache[i]);
//	}
//	int min = 0;
//	for (int i = 0; i < m; i++)
//	{
//		min += ache[i];
//	}
//	for (int i = 1; i <= n - m; i++)
//	{
//		int sum = 0;
//		for (int j = i; j < i + m; j++)
//		{
//			sum += ache[j];
//		}
//		if (min > sum)
//			min = sum;
//	}
//	printf("%d\n", min);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[4] = { 0 };
//	char* p1 = str;
//	char* p2 = &str;
//	printf("%p %p\n%p %p\n", p1, p2, str + 1, &str + 1);
//	return 0;
//}