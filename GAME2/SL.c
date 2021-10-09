#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}
void game()
{
	printf("扫雷游戏开始");
	//雷的信息存储。雷----'1'，没雷----'0'
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '#');
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择(1/0):");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input != 0);
}
int main()
{
	test();
	return 0;
}