#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//char cnum1[205] = { 0 };
//char cnum2[205] = { 0 };//��ŵ��ú������
//int num1[205] = { 0 };//���cnum1��Ӧ��ʮ��������
//int num2[205] = { 0 };//���cnum2��Ӧ��ʮ��������
//int sum[205] = { 0 };//��ź�
//int max(int x, int y)
//{
//	return x >= y ? x : y;
//}
//int check(char* cnum)
//{
//	int len = strlen(cnum);
//	for (int i = 0; i < len / 2; i++)
//	{
//		if (cnum[i] != cnum[len - i - 1])
//			return 0;
//	}
//	return 1;
//}
//void reverse(char* src, char* dest)
//{
//	int len = strlen(src);
//	for (int i = 0; i < len; i++)
//	{
//		dest[len - i - 1] = src[i];
//	}
//}
//void set(int sum[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		sum[i] = 0;
//}
//int add(int num1[], int num2[], int sum[], int base)
//{
//	int len1 = strlen(cnum1);
//	int len2 = strlen(cnum2);
//	for (int i = 0; i < len1; i++)
//	{
//		if (cnum1[i] >= '0' && cnum1[i] <= '9')
//			num1[len1 - i - 1] = cnum1[i] - '0';
//		else
//			num1[len1 - i - 1] = cnum1[i] - 'A' + 10;
//	}
//	for (int j = 0; j < len2; j++)
//	{
//		if (cnum2[j] >= '0' && cnum2[j] <= '9')
//			num2[len2 - j - 1] = cnum2[j] - '0';
//		else
//			num2[len2 - j - 1] = cnum2[j] - 'A' + 10;
//	}
//	int len = max(len1, len2) + 1;
//	for (int k = 0; k < len; k++)
//	{
//		sum[k] += num1[k] + num2[k];
//		sum[k + 1] = sum[k] / base;
//		sum[k] %= base;
//	}
//	//ɾ��ǰ��0
//	for (; len >= 0; len--)
//	{
//		if (sum[len - 1] != 0)
//			break;
//	}
//	return len;
//}
//void convert(char* cnum, int sum[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (sum[i] <= 9 && sum[i] >= 0)
//			cnum[sz - i - 1 ] = '0' + sum[i];
//		else
//			cnum[sz - i - 1] = 'A' + sum[i] - 10;
//	}
//}
//int main()
//{
//	int N;//����
//	scanf("%d", &N);
//	scanf("%s", &cnum1);
//	int step = 0;
//	while (step <= 30)
//	{
//		step++;
//		reverse(cnum1, cnum2);
//		int sz = add(num1, num2, sum, N);//�߾��ȼӷ�
//		convert(cnum1, sum, sz);//����ת��ΪN�������ֲ�����cnum1������
//		set(sum, sz);
//		int ret = check(cnum1);//�ж��Ƿ�Ϊ������
//		if (ret == 1)
//			break;
//	}
//	if (step > 30)
//		printf("Impossible!\n");
//	else
//		printf("STEP=%d\n", step);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}//�ж��Ƿ�Ϊ����
//int main()
//{
//	int n, num;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		int tmp = num;
//		for (int j = 2; j <= tmp; j++)
//		{
//			if (tmp % j == 0 && is_prime(j) == 1)
//			{
//				printf("%d", j);
//				tmp /= j;
//				if (tmp == 1)
//					break;
//				else
//					printf("*");
//				j--;
//			}
//		}
//		if (tmp == num)
//			printf("%d\n", num);
//		else
//			printf("\n");
//	}
//	return 0;
//}

//ƹ����
//#include<stdio.h>
//#include<string.h>
//char score[3000][3000];
//int end(char* score)
//{
//	int len = strlen(score);
//	for (int i = 0; i < len; i++)
//	{
//		if (score[i] == 'E')
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int hua = 0;
//	int opponent = 0;
//	while (1)
//	{
//		scanf("%s", &score[i]);
//		if (end(score[i]) == 1)
//			break;
//		i++;
//	}
//	//11�����µĽ��
//	for (int j = 0; j <= i; j++)
//	{
//		int len = strlen(score[j]);
//		int k = 0;
//		for (k = 0; k < len; k++)
//		{
//			if (score[j][k] == 'E')
//			{
//				printf("%d:%d\n", hua, opponent);
//				hua = 0;
//				opponent = 0;
//				break;
//			}//��������
//			else if (score[j][k] == 'W')
//			{
//				hua++;
//				if ((hua >= 11 || opponent >= 11) && (hua - opponent >= 2 || hua - opponent <= -2))
//				{
//					printf("%d:%d\n", hua, opponent);
//					hua = 0;
//					opponent = 0;
//				}
//			}
//			else if (score[j][k] == 'L')
//			{
//				opponent++;
//				if ((hua >= 11 || opponent >= 11) && (hua - opponent >= 2 || hua - opponent <= -2))
//				{
//					printf("%d:%d\n", hua, opponent);
//					hua = 0;
//					opponent = 0;
//				}
//			}
//		}
//		if (score[j][k] == 'E')
//			break;
//	}
//	printf("\n");
//	//21�����µĽ��
//	for (int j = 0; j <= i; j++)
//	{
//		int len = strlen(score[j]);
//		int k = 0;
//		for (k = 0; k < len; k++)
//		{
//			if (score[j][k] == 'E')
//			{
//				printf("%d:%d\n", hua, opponent);
//				hua = 0;
//				opponent = 0;
//				break;
//			}
//			else if (score[j][k] == 'W')
//			{
//				hua++;
//				if ((hua >= 21 || opponent >= 21) && (hua - opponent >= 2 || hua - opponent <= -2))
//				{
//					printf("%d:%d\n", hua, opponent);
//					hua = 0;
//					opponent = 0;
//				}
//			}
//			else if (score[j][k] == 'L')
//			{
//				opponent++;
//				if ((hua >= 21 || opponent >= 21) && (hua - opponent >= 2 || hua - opponent <= -2))
//				{
//					printf("%d:%d\n", hua, opponent);
//					hua = 0;
//					opponent = 0;
//				}
//			}
//		}
//		if (score[j][k] == 'E')
//			break;
//	}
//	return 0;
//}