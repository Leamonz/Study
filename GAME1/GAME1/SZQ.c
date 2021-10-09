#define _CRT_SECURE_NO_WARNINGS
//数组的应用实例：三子棋
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}
void game()
{
	char ret = 0;
	printf("三子棋游戏开始\n");
	char board[ROW][COL] = {0};//数组--用于存放走出的每一步棋盘信息
	//初始化数组
	Initboard(board, ROW, COL);
	//打印初始化的棋盘
	Displayboard(board, ROW, COL);
	//开始下棋
	while (1)
	{
		//玩家下棋
		Playermove(board , ROW , COL);
		Displayboard(board, ROW, COL);
		//判断玩家是否胜利
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断电脑是否胜利
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家胜利\n");
	else if (ret == 'O')
		printf("电脑胜利\n");
	else if (ret == 'T')
		printf("平局\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择是否开始游戏(输入1/0)：");
		scanf("%d", &input);
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