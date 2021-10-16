#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//}
//int main()
//{
//	test();
//	test(100);
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}
//设计一个小程序来判断当前机器的存储模式
//int check_sys()
//{
//	int n = 1;
//	/*char* p = (char*)&n;*/
//	/*if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//	/*return *p;*/
//	return *(char*)&n;
//}
//int main()
//{
//	//int a = 20;
//	//char* p = (char*)&a;//强制类型转换避免报错
//	//printf("%x\n", *p);//拿出存储的第一个字节来判断是大端还是小端即可
//	//写一个函数进行上述操作----返回1是小端，返回0则是大端
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
