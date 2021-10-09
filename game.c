#define _CRT_SECURE_NO_WARNINGS
//������ʵ��
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
	//��ӡ�к�
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
			//��ӡ�к�
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
//дչ��������Ҫ�õ��ݹ�
//1.���겻����
//2.��������ΧҲû����
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
		printf("������ɨ������:");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			//����Ϸ�
			//1.�ȵ���
			if (mine[x][y] == '*')
			{
				printf("�㱻ը���ˣ���Ϸ����\n");
				Displayboard(mine, row, col);
				break;
			}
			//2.������
			else
			{
				Unfold(mine, show, x, y);
				Displayboard(show, row, col);
			}
		}
		else
		{
			printf("���������������������\n"); 
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
		Displayboard(mine, row, col);
	}
}