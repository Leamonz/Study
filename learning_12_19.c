#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int x, n;
//	scanf("%d %d", &x, &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; ((x + i) <= 7) && (i <= n); i++)
//	{
//		if ((x + i == 6) || (x + i == 7))
//			continue;
//		else
//			sum += 250;
//	}
//	int off = 0;
//	if (n - i > 7)
//	{
//		if ((n - i) % 7 <= 5)
//			off = ((n - i) / 7) * 2;
//		else
//			off = ((n - i) / 7) * 2 + (n - i) % 7 - 5;
//	}
//	else
//	{
//		if (n - i > 5)
//			off = n - i - 5;
//	}
//	sum = sum + 250 * (n - i - off);
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int Pascal(int x)
//{
//	int bit = 0;
//	int i = 0;
//	while (x)
//	{
//		i++;
//		if (x % 10 == 7)
//		{
//			bit = i;
//		}
//		x /= 10;
//	}
//	return bit;
//}
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int count = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (Pascal(i) != 0)
//			{
//				count += (int)(pow(10, Pascal(i) - 1));
//				i += (int)(pow(10, Pascal(i) - 1));
//			}
//		}
//		printf("%d\n", n - count);
//	}
//	return 0;
//}
