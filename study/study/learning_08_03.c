#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//дһ�������������������ͱ���������
//void exchange1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//error----a,b�ĵ�ַ��x,y�Ĳ�ͬ
//�Ż�
//void exchange2(int* p1, int* p2)//p1,p2�����β�
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
//	exchange2(&a, &b);//&a,&b����ʵ��
//	printf("a = %d,b = %d",a,b);
//	return 0;
//}
//��ʵ�δ����β�ʱ���β�ʵ������ʵ�ε�һ����ʱ���������Զ��βε��޸��ǲ���ı�ʵ�ε�


//дһ���������ж�һ�����ǲ�������
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
//		printf("%d������\n", n);
//	else
//		printf("%d��������\n",n);
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
//�Ż�:
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;//ִ�з���ֵ֮����ֱ�ӽ���
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
//	printf("\n����%d������\n",count);
//	return 0;
//}
//дһ���������ж�����
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
//	printf("\n����%d������\n",count);
//	return 0;
//}
//�ú������ж��ֲ���
//�ҵ��˷�����������±꣬�Ҳ����򷵻�-1
//				    ���ﴫ���Ĳ�����������һ��ָ��
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
//		//�����������ѭ�����ڲ�����Ϊÿ�ν��ж��ֲ��Ҷ���Ҫ���м�ֵ
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
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ���,�±���%d\n",ret);
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("�Ҳ���ָ������\n");
//	return 0;
//}
//дһ��������ÿ����һ�����������num�����һ ---- ��ַ����
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
//��ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//����������������͵���
//int Add(int x, int y);//����������
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//�����ĵ���
//	printf("sum = %d",sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}