#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	for (int i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int k, x;
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d", &x);
//		for (int j = 2; j <= x; j++)
//		{
//			if (j == x)
//				printf("%d\n", j);
//			else if ((x % j == 0) && (is_prime(j) == 1))
//			{
//				printf("%d*", j);
//				x /= j;
//				j--;
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//void bobo(int* brr, int w)
//{
//	for (int i = 0; i < w - 1; i++)
//	{
//		for (int j = 0; j < w - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (brr[j] > brr[j + 1])
//			{
//				tmp = brr[j];
//				brr[j] = brr[j + 1];
//				brr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int w = 0, n = 0;
//	int arr[100] = { 0 };
//	int brr[100] = { 0 }, crr[100] = { 0 }, drr[100] = { 0 };
//	while (scanf("%d%d", &w, &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		if (w % 2 == 0)
//		{
//			printf("ERROR\n");
//		}
//		else if (w % 2 == 1)
//		{
//
//			for (int j = 0; j <= n - w; j++)
//			{
//				for (int k = 0; k < w; k++)
//				{
//					brr[k] = arr[k + j];
//				}
//				bobo(brr, w);
//				crr[j] = j + w / 2;
//				for (int p = 0; p < w; p++)
//				{
//					if (brr[w / 2] == arr[j + p])
//					{
//						drr[j] = j + p;
//						break;
//					}
//				}
//			}
//			for (int m = 0; m <= n - w; m++)
//			{
//				arr[crr[m]] = arr[drr[m]];
//			}
//			for (int q = 0; q < n; q++)
//			{
//				printf("%d ", arr[q]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int M, N;
//	int count[10] = { 0 };
//	scanf("%d%d", &M, &N);
//	for (int i = M; i <= N; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			count[tmp % 10]++;
//			tmp /= 10;
//		}
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", count[j]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	printf("%d %d\n", 'A', 'Z');//65~90
//	printf("%d %d\n", 'a', 'z');//97~122
//	printf("%d\n", 'A' - 'a');//-32
//	return 0;
//}
//int main()
//{
//	printf("%d %d\n", strcmp("abc", "abc"), my_strcmp("abc", "abc"));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//char words[1000][100] = { 0 };
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	char ch = 0;
//	char most[100] = { 0 };
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 65) && (ch <= 90))
//		{
//			words[i][j] = ch + 32;
//			j++;
//		}
//		else if ((ch >= 97) && (ch <= 122))
//		{
//			words[i][j] = ch;
//			j++;
//		}
//		else
//		{
//			if (j != 0)
//			{
//				i++;
//				j = 0;
//			}
//		}
//	}
//	for (int k = 0; k < i; k++)
//	{
//		int count = 0;
//		for (int m = 0; m < i; m++)
//		{
//			if (strcmp(words[k], words[m]) == 0)
//				count++;
//		}
//		if (count > max)
//		{
//			max = count;
//			strcpy(most, words[k]);
//		}
//		else if (count == max)
//		{
//			if (strcmp(words[k], most) > 0)
//				strcpy(most, words[k]);
//		}
//	}
//	for (int l = 0; l < strlen(most); l++)
//	{
//		printf("%c", most[l]);
//	}
//	printf(" %d\n", max);
//	return 0;
//}