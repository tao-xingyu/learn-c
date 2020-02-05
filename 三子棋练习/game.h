#ifndef _GAME_H
#define _GAME_H
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Initboard(int board[][3], int row, int col);
void Showboard(char board[][3]);
void PlayerMove(int board[][3], int row, int col);
void ComputerMove(int board[][3], int row, int col);
//char Iswin(int board[][3], int row, int col);

#endif // _GAME_H
