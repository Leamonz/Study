#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//逆序输出一个数字
//int main()
//{
//	printf("Hello World!\n");
//	return 0;
//}
//void reverse(int n)
//{
//	int a = n % 10;//个位
//	int b = (n % 100 - a) / 10;//十位
//	int c = n / 100;//百位
//	printf("reverse = %d\n", a * 100 + b * 10 + c);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	reverse(n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("n\t\tm = (1+3n+3n^2+n^3)\n");
//	for (n = 0; n < 100; n++)
//	{
//		printf("%d\t\t", n);
//		printf("%d\n", 1 + 3 * n + 3 * n * n + n * n * n);
//	}
//	return 0;
//}
//int main()
//{
//	int i1, i2, i3;//百位，十位，个位
//	scanf("%1d%1d%1d", &i1, &i2, &i3);//只取一位数字
//	printf("reverse = %d", i3 * 100 + i2 * 10 + i1);
//	return 0;
//}
// 求和
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//进制转换
//void Convert(int n)
//{
//	int i = 0;
//	int arr[5] = { 0 };
//	while (n != 0)
//	{
//		arr[i] = n % 8;
//		n = n / 8;
//		i++;
//	}
//	printf("In Octal, your number is:");
//	for (i = 4; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("Enter a number between 0 and 32767:");
//	scanf("%d", &n);
//	Convert(n);
//	return 0;
//}
//int main()
//{
//	char ch = getchar();
//	int count = 1;
//	while (ch != EOF)
//	{
//		putchar(ch);
//		ch = getchar();
//		++count;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '\n')
//		{
//			count++;
//		}
//	}
//	/*for (; (ch = getchar()) != EOF; count++)
//	{
//		gets();
//		if (ch == '\n')
//		{
//			continue;
//		}
//	}*/
//	printf("count = %d\n", count);
//	return 0;
//}
////递归实现计算x^y
//float Pow(int x, int y)
//{
//	if (y > 0)
//	{
//		if (y == 1)
//			return x;
//		else
//			return x * Pow(x, y - 1);
//	}
//	else if (y == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1/(Pow(x, -y));
//	}
//}
//int main()
//{
//	int power = 0;//底数
//	int exponent = 0;//指数
//	printf("power = ");
//	scanf("%d", &power);
//	printf("exponent = ");
//	scanf("%d", &exponent);
//	printf("%f\n", Pow(power, exponent));
//	return 0;
//}
//int main()
//{
//	char str1[] = "";
//	char str2[] = "";
//	scanf("%s", &str1);
//	getchar();
//	scanf("%s", &str2);
//	getchar();
//	if (strcmp(str1, str2) > 0)
//	{
//		printf("%s\n", str1);
//	}
//	else if (strcmp(str1, str2) == 0)
//	{
//		printf("一样长\n");
//	}
//	else
//	{
//		printf("%s\n", str2);
//	}
//	return 0;
//}//error
//int main()
//{
//	char pSrc[] = "hello world!";
//	char pDest[] = "hello bit!";
//	char* p1 = &pSrc;
//	char* p2 = &pDest;
//	strcpy(*p2, *p1);
//	printf("%s\n", *p2);
//	return 0;
//}//error