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
	//dest在src前面----从前向后拷
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
	//dest在src和src+num之间----从后向前拷
	else if (dest > src)
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
		return dest;
	}
	//dest在src+num后面----从前向后或者从后向前都行
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