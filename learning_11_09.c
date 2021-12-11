#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void max_min(int arr[], int sz, int* max, int* min)
//{
//	*min = arr[0];
//	*max = arr[0];
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > *max)
//			*max = arr[i];
//		else if (arr[i] < *min)
//			*min = arr[i];
//	}
//}
//int main()
//{
//	int arr[] = { 10,93,2,33,47,18,29,30,65,40 };
//	int sz = sizeof(arr) / sizeof(*arr);
//	int max = 0;
//	int min = 0;
//	max_min(arr, sz, &max, &min);
//	printf("max = %d\nmin = %d\n", max, min);
//	return 0;
//} 
//int main()
//{
//	int* p = (int[]){ 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 10,23,14,2,445,39,20,13,44,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int sum = 0;
//	for (p = arr; p < arr + sz; p++)
//	{
//		sum += *p;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	int row = 3;
//	int col = 5;
//	for (int* p = &arr[0][0]; p <= &arr[row - 1][col - 1]; p++)
//	{
//		*p = 1;
//	}
//	for (int* p = &arr[0][0]; p <= &arr[row - 1][col - 1]; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}
//int main()
//{
//	int (*pfArr[4])(int, int);
//	int(*(*ppfArr)[4])(int, int);
//	return 0;
//}

//int main()
//{
//	char str[20] = "";
//	char* p = NULL;
//	int i = 0;
//	scanf("%s", &str);
//	int len = strlen(str);
//	for (p = str + len - 1; p >= str; p--)
//	{
//		printf("%c", *p);
//	}
//	printf("\n");
//	return 0;
//}