#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef void(*pfun_t)(int);
void (*signal(int, void(*)(int)))(int);
pfun_t signal(int, pfun_t);
typedef unsigned int uint;
#define pig "张珣";
//int main()
//{
//	char ch[] = pig;
//	printf("%s\n", ch);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}int Sub(int x, int y)
{
	return x - y;
}int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	///*int (*pa)(int, int) = &Add;
//	//printf("%d\n", (pa)(2, 3));
//	//printf("%d\n", (*pa)(2, 3));*/
//	//int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	///*printf("%d\n", (*parr[0])(2, 3));
//	//printf("%d\n", (*parr[1])(2, 3));
//	//printf("%d\n", (*parr[2])(2, 3));
//	//printf("%d\n", (*parr[3])(2, 3));*/
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%d\n", (*parr[i])(2, 3));
//	//}
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pfarr[4])(char*, const char*) = { my_strcpy };
//	return 0;
//}

//int XOR(int x, int y)
//{
//	return x ^ y;
//}
//int AND(int x, int y)
//{
//	return x & y;
//}
//int OR(int x, int y)
//{
//	return x | y;
//}
//int XNOR(int x, int y)
//{
//	return ~(x ^ y);
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add    2.Sub  ***\n");
//	printf("***  3.Mul    4.Div  ***\n");
//	printf("***  5.AND    6.OR   ***\n");
//	printf("***  7.XOR    8.XNOR ***\n");
//	printf("***       0.Exit     ***\n");
//	printf("************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x, y;
//	int (*parr[8])(int, int) = { Add,Sub,Mul,Div,AND,OR,XOR,XNOR };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 8)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", (*parr[input - 1])(x, y));
//		}
//		else if (input == 0)
//			printf("退出\n");
//		else
//			printf("选择错误\n");
//	} while (input);
//	return 0;
//}