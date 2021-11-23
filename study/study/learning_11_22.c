#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//三步翻转法左旋字符串
//abcdef左旋2个字符
//ab cdef----分为两部分
//bafedc----两部分同时逆序
//cdefab----整个字符串逆序
//void reverse(char* arr, int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		char tmp = *(arr + i);
//		*(arr + i) = *(arr + len - i - 1);
//		*(arr + len - i - 1) = tmp;
//	}
//}
//void move(char* arr, int k)
//{
//	int len = strlen(arr);
//	reverse(arr, k);
//	reverse(arr + k, len - k);
//	reverse(arr, len);
//}
//int main()
//{
//	int k = 0;
//	char arr1[100] = "";
//	gets(arr1);
//	char arr2[100] = "";
//	gets(arr2);
//	printf("k = ");
//	scanf("%d", &k);
//	move(arr1, k);
//	if (strcmp(arr1, arr2) == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
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


//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 10000; i++)
//	{
//		if ((i % 13 == 0) && (i % 17 == 0))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//A（90~100），B（80~89），C（70~79），D（60~69）和E（60以下
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if ((input >= 90) && (input <= 100))
//			printf("A\n");
//		else if ((input >= 80) && (input <= 89))
//			printf("B\n");
//		else if ((input >= 70) && (input <= 79))
//			printf("C\n");
//		else if ((input >= 60) && (input <= 69))
//			printf("D\n");
//		else if ((input < 60) && (input >= 0))
//			printf("E\n");
//		else
//			printf("Z\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int sum = 1 * 2 * 3 + 2 * 3 * 4;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		while (m > 3)
//		{
//			sum += (m - 1) * m * (m + 1);
//			m--;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int head, feet, a, b;
//		int flag = 0;
//		scanf("%d %d", &head, &feet);
//		for (a = 0; a <= 100; a++)
//		{
//			for (b = 0; b <= 100; b++)
//			{
//				if ((a + b == head) && (2 * a + 4 * b == feet))
//				{
//					printf("%d %d\n", a, b);
//					flag = 1;
//				}
//			}
//		}
//		if ((a > 100) && (flag == 0))
//			printf("error\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1]);
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n, l, k, y;
//	scanf("%d %d %d %d", &n, &l, &k, &y);
//	getchar();
//	char ch = 0;
//	int time[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		int A = 0;
//		int B = 0;
//		int C = 0;
//		do
//		{
//			scanf("%c", &ch);
//			switch (ch)
//			{
//			case 'A':
//				A++;
//				break;
//			case 'B':
//				B++;
//				break;
//			case 'C':
//				C++;
//				break;
//			}
//		} while (ch!= '\n');
//		time[i] = A * (l + k + y) + B * (2 * l + k) + C * (3 * l + 3 * k + 2 * y);
//	}
//	bubble_sort(time, n);
//	printf("%d\n", time[0]);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//int judge(int input, int bit)
//{
//	int arr[10] = { 0 };
//	int tmp = input;
//	int sum = 0;
//	for (int i = 0; i < bit; i++)
//	{
//		arr[i] = tmp % 10;
//		tmp /= 10;
//	}
//	for (int j = 0; j < bit; j++)
//	{
//		sum += (int)arr[j] * pow(10, bit - j - 1);
//	}
//	if (sum == input)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int bit = count_bit(input);
//	int ret = judge(input, bit);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//int reverse(int input, int bit)
//{
//	int arr[10] = { 0 };
//	int tmp = input;
//	int sum = 0;
//	for (int i = 0; i < bit; i++)
//	{
//		arr[i] = tmp % 10;
//		tmp /= 10;
//	}
//	for (int j = 0; j < bit; j++)
//	{
//		sum += (int)arr[j] * pow(10, bit - j - 1);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b, c;
//		scanf("%d %d", &a, &b);
//		c = a + b;
//		int ra = reverse(a, count_bit(a));
//		int rb = reverse(b, count_bit(b));
//		int rc = reverse(c, count_bit(c));
//		if (rc == ra + rb)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int T = 0;
//	int N = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int time = 0;
//		scanf("%d", &N);
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[j]);
//		}
//		time += arr[0] * 6 + 5;
//		for (int k = 0; k < N - 1; k++)
//		{
//			if (arr[k] > arr[k + 1])
//				time = time + (arr[k] - arr[k + 1]) * 4 + 5;
//			else if (arr[k] < arr[k + 1])
//				time = time + (arr[k + 1] - arr[k]) * 6 + 5;
//		}
//		printf("%d\n", time);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int total = 0;
//	scanf("%d", &N);
//	while (N)
//	{
//		if (N >= 50)
//		{
//			total += (N / 50) * 7;
//			N -= 50 * (N / 50);
//		}
//		else if ((N >= 30) && (N < 50))
//		{
//			total += (N / 30) * 4;
//			N -= 30 * (N / 30);
//		}
//		else if (N < 30)
//		{
//			total += N / 10;
//			N = 0;
//		}
//	}
//	printf("%d\n", total);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b, c;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		scanf("%d %d %d", &a, &b, &c);
//		for (j = 10; j <= 100; j++)
//		{
//			if ((j % 3 == a) && (j % 5 == b) && (j % 7 == c))
//			{
//				printf("%d\n", j);
//				break;
//			}
//		}
//		if (j > 100)
//			printf("Impossible\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i, n, l, k, y;
//	char arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int m = 0;
//	scanf("%d %d %d %d", &n, &l, &k, &y);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		int j = 0;
//		do
//		{
//			arr1[j] = getchar();
//			j++;
//		}while (arr1[j - 1]!= '\n');
//		for (int p = 0; p < j; p++)
//		{
//			if (arr1[p] == 'A')
//				a++;
//			else if (arr1[p] == 'B')
//				b++;
//			else if (arr1[p] == 'C')
//				c++;
//		}
//		arr2[m] = a * l + b * k + c * y;
//		m++;
//	}
//	for (int g = 0; g < n; g++)
//	{
//		for (int h = 0; h < n - g - 1; h++)
//		{
//			if (arr2[h] > arr2[h + 1])
//			{
//				int tmp = arr2[h];
//				arr2[h] = arr2[h + 1];
//				arr2[h + 1] = tmp;
//			}
//		}
//	}
//	printf("%d\n", arr2[0]);
//	return 0;
//}