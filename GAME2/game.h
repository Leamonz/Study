#pragma once
//º¯ÊýµÄÉùÃ÷
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int x, int y);
void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
