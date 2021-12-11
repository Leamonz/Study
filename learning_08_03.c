#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//写一个函数来交换两个整型变量的内容
//void exchange1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//error----a,b的地址和x,y的不同
//优化
//void exchange2(int* p1, int* p2)//p1,p2就是形参
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int a = 3;
//	int b = 6;
//	exchange2(&a, &b);//&a,&b就是实参
//	printf("a = %d,b = %d",a,b);
//	return 0;
//}
//当实参传给形参时，形参实际上是实参的一份临时拷贝，所以对形参的修改是不会改变实参的


//写一个函数来判断一个数是不是素数
//int judge(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i != 0)
//			continue;
//		else
//			break;
//	}
//	return i;
//}
//int main()
//{
//	int n = 0;
//	int j = 0;
//	scanf("%d",&n);
//	j = judge(n);
//	if (j == (sqrt(n) + 1))
//		printf("%d是素数\n", n);
//	else
//		printf("%d不是素数\n",n);
//	return 0;
//}
//error
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			break;
//		else
//			;
//	}
//	if (j <= sqrt(x))
//		return 0;
//	else
//		return 1;
//}
//优化:
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;//执行返回值之后函数直接结束
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else
//			continue;
//	}
//	printf("\n共有%d个素数\n",count);
//	return 0;
//}
//写一个函数来判断闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else
//			;
//	}
//	printf("\n共有%d个闰年\n",count);
//	return 0;
//}
//用函数进行二分查找
//找到了返回这个数的下标，找不到则返回-1
//				    这里传来的参数本质上是一个指针
//int binary_search(int v[], int i)
//{
//	int sz = sizeof(v) / sizeof(v[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		if (v[mid] > i)
//			right = mid - 1;
//		else if (v[mid] < i)
//			left = mid + 1;
//		else
//			return mid;
//	}
//		return -1;
//}
// error
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//这个语句必须在循环体内部，因为每次进行二分查找都需要求中间值
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (-1 == ret)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了,下标是%d\n",ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	scanf("%d",&k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("找不到指定数字\n");
//	return 0;
//}
//写一个函数，每调用一次这个函数，num都会加一 ---- 传址调用
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n",num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}
//链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//函数的声明，定义和调用
//int Add(int x, int y);//函数的声明
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//函数的调用
//	printf("sum = %d",sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}