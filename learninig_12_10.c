#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int arr[10000] = { 0 };
//int tmp[10000] = { 0 };
//void bubble_sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 1;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	for (int j = 0; j < n - 1; j++)
//	{
//		if (arr[j + 1] - arr[j] == 1)
//			count++;
//		else
//		{
//			if (count != 1)
//			{
//				tmp[k] = count;
//				k++;
//			}
//			count = 1;
//		}
//	}
//	bubble_sort(tmp, k);
//	if (tmp[k - 1] == 0)
//		printf("%d\n", 1);
//	else
//		printf("%d\n", tmp[k - 1]);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int count_boy(char* str)
//{
//	int count = 0;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if ((*(str + i) == 'b') && (*(str + i + 1) == 'o') && (*(str + i + 2) == 'y'))
//		{
//			count++;
//			i += 2;
//			continue;
//		}
//		else if (((*(str + i) == 'b') && (*(str + i + 1) == 'o'))||((*(str + i) == 'o') && (*(str + i + 1) == 'y')))
//		{
//			count++;
//			i += 1;
//			continue;
//		}
//		else if ((*(str + i) == 'b') || (*(str + i) == 'o') || (*(str + i) == 'y'))
//		{
//			count++;
//			continue;
//		}
//	}
//	return count;
//}
//int count_girl(char* str)
//{
//	int count = 0;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if ((*(str + i) == 'g') && (*(str + i + 1) == 'i') && (*(str + i + 2) == 'r') && (*(str + i + 3) == 'l'))
//		{
//			count++;
//			i += 3;
//			continue;
//		}
//		else if (((*(str + i) == 'g') && (*(str + i + 1) == 'i') && (*(str + i + 2) == 'r')) || (*(str + i) == 'i') && (*(str + i + 1) == 'r') && (*(str + i + 2) == 'l'))
//		{
//			count++;
//			i += 2;
//			continue;
//		}
//		else if (((*(str + i) == 'g') && (*(str + i + 1) == 'i')) || ((*(str + i) == 'i') && (*(str + i + 1) == 'r')) || ((*(str + i) == 'r') && (*(str + i + 1) == 'l')))
//		{
//			count++;
//			i += 1;
//			continue;
//		}
//		else if ((*(str + i) == 'g') || (*(str + i) == 'i') || (*(str + i) == 'r') || ((*(str + i) == 'l')))
//		{
//			count++;
//			continue;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char str[1000] = { 0 };
//	scanf("%s", &str);
//	int boy = count_boy(str);
//	int girl = count_girl(str);
//	printf("%d\n%d\n", boy, girl);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double distance = 0;
//	int step = 0;
//	scanf("%lf", &distance);
//	double len = 0;
//	while (len < distance)
//	{
//		len += 2 * pow(0.98, step);
//		step++;
//	}
//	printf("%d\n", step);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long elec = 0;
//	double bill = 0;
//	scanf("%lld", &elec);
//	if (elec <= 150)
//		bill = (double)elec * 0.4463;
//	else if ((elec >= 151) && (elec <= 400))
//		bill = (double)(150 * 0.4463 + (elec - 150) * 0.4663);
//	else if (elec >= 401)
//		bill = (double)(150 * 0.4463 + 250 * 0.4663 + (elec - 400) * 0.5663);
//	printf("%.1lf\n", bill);
//	return 0;
//}