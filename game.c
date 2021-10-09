#define _CRT_SECURE_NO_WARNINGS
//函数的实现
#include "game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ",i);
	}
	for (i = 1; i <= row; i++)
	{
		printf("\n");
		for (j = 1; j <= col+1; j++)
		{
			if (j <= col)
				printf(" %c ",board[i][j]);
			//打印行号
			else if(j = col+1)
				printf(" %d",i);
		}
	}
	printf("\n");
}
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count != 0)
	{
		x = (rand() % row) + 1;
		y = (rand() % row) + 1;
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col) && board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	//'1'-'0'=1
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}
//写展开功能需要用到递归
//1.坐标不是雷
//2.该坐标周围也没有雷
void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] != '1')
			{
				Unfold(mine, show, i, j);
				show[i][j] = ' ';
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
			}
		}
	}
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入扫雷坐标:");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			//坐标合法
			//1.踩到雷
			if (mine[x][y] == '*')
			{
				printf("你被炸死了，游戏结束\n");
				Displayboard(mine, row, col);
				break;
			}
			//2.不是雷
			else
			{
				Unfold(mine, show, x, y);
				Displayboard(show, row, col);
			}
		}
		else
		{
			printf("坐标输入错误，请重新输入\n"); 
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功！\n");
		Displayboard(mine, row, col);
	}
}