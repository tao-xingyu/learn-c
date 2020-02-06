#ifndef _GAME_H_
#define _GAME_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_NUM 10

void Initboard(char board[][COLS], int rows, int cols, char set);
void Showboard(char board[][COLS],int row,int col);
void Setmine(char board[][COLS], int row, int col);
void Findmine(char mine[][COLS], char mineinfo[][COLS], int row, int col);

#endif
