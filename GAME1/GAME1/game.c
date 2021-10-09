#define _CRT_SECURE_NO_WARNINGS
//函数的实现
#include "game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行的数据
		for(j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分隔行
		if(i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家请下棋\n");
	while (1)
	{
		printf("请输入下棋的坐标：");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标输入错误\n");
			}
		}
	}

}
void Computermove(char board[ROW][COL],int row , int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
		else
			continue;
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断胜利
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][0] != ' '))
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[0][i] != ' '))
		{
			return board[1][i];
		}
	}
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	//判断平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'T';
	}
	//继续
	return 'C';
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}	