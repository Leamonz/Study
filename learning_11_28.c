#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void* my_memcpy(void* dest, const void* src, int num)
{
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	for (int i = 0; i < num; i++)
	{
		*(p1 + i) = *(p2 + i);
	}
	return dest;
}
void* my_memmove(void* dest, const void* src, int num)
{
	//dest��srcǰ��----��ǰ���
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
		return dest;
	}
	//dest��src��src+num֮��----�Ӻ���ǰ��
	else if (dest > src)
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
		return dest;
	}
	//dest��src+num����----��ǰ�����ߴӺ���ǰ����
	else
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
		return dest;
	}
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[50] = "abcdef";
//	char arr2[50] = "hello world";
//	/*my_memcpy(arr1, arr2, sizeof(arr2));*/
//	printf("%s\n", arr2);
//	return 0;
//}