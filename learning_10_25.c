#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>//可以查看整型的范围
#include<float.h>//可以查看浮点型数的范围
//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值是：%d\n", n);
//	printf("*pFloat的值是：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n的值是：%d\n", n);
//	printf("*pFloat的值是：%f\n", *pFloat);
//	return 0;
//}
//
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0 * 1.011 * 2^2
//	//S = 0
//	//M = 1.011
//	//E = 2
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b00000
//	return 0;
//}