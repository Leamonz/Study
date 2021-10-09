#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	double amount = 0;
//	double tax_rate = 0.05;
//	printf("Enter an amount:");
//	scanf("%lf", &amount);
//	amount = amount + amount * tax_rate;
//	printf("With tax added:%.2lf\n",amount);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int ret = 0;
//	printf("Enter x:");
//	scanf("%d", &x);
//	ret = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
//	printf("3x^5+2x^4-5x^3-x^2+7x-6 = %d\n", ret);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int ret = 0;
//	printf("Enter x:");
//	scanf("%d", &x);
//	ret = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
//	printf("3x^5+2x^4-5x^3-x^2+7x-6 = %d\n", ret);
//	return 0;
//}
//int main()
//{
//	int amount = 0;
//	int i = 0;
//	int j = 3;
//	int arr1[4] = { 0 };
//	int arr2[4] = { 1,5,10,20 };
//	printf("Enter a dollar amount:");
//	scanf("%d", &amount);
//	while (i<4)
//	{
//		arr1[i] = amount / arr2[j];
//		amount = amount - arr1[i] * arr2[j];
//		i++;
//		j--;
//	}
//	printf("$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n", arr1[0], arr1[1], arr1[2], arr1[3]);
//	return 0;
//}