#include <stdio.h>
#include <windows.h>
#include<conio.h>
#pragma once


#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4


void gotoxy(int x, int y) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(consoleHandle, pos);
}
int keyControl()//키보드 이벤트 처리
{
    char temp = _getch();//키보드 입력
    if (temp == 'w' || temp == 'W') return UP;
    else if (temp == 'a' || temp == 'A') return LEFT;
    else if (temp == 's' || temp == 'S') return DOWN;
    else if (temp == 'd' || temp == 'D') return RIGHT;
    else if (temp == ' ') return SUBMIT;
}
int drawMenu()//메뉴 그리기
{
    int x = 52, y = 16;
    printf("\n\n\n\n");
    printf("========================================================================================================================\n");
    printf("========================================================================================================================\n");
    printf("$$oOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUooOoUoOoUoOoUoOoUoOoUoOoUoOo$$\n");
    printf("|WWWW|               []      []     []     [][]    [] [][][][][] []      []     []     [][]    []                 |WWWW|\n");
    printf(" |WW|                []      [] [][]  [][] [][][]  [] []      [] []      [] [][]  [][] [][][]  []                  |WW| \n");
    printf(" |WW|                [][][][][] []      [] []  []  [] []         [][]  [][] []      [] []  []  []                  |WW| \n");
    printf(" |WW|                [][][][][] [][][][][] []  []  [] []  [][][] [][][][][] [][][][][] []  []  []                  |WW| \n");
    printf(" |WW|                []      [] []      [] []    [][] []      [] []  []  [] []      [] []    [][]                  |WW| \n");
    printf("|WWWW|               []      [] []      [] []      [] [][][][][] []  []  [] []      [] []      []                 |WWWW|\n");
    printf("$$oOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoUoOoU$$\n");
    printf("========================================================================================================================\n");
    printf("                                                 >>CH00$3 TH3 M3NU<<                                                    \n");
    gotoxy(x - 2, y);//x-2인 이유: 커서
    printf("> EASY MODE\n");
    gotoxy(x, y + 1);
    printf("HARD MODE\n");
    gotoxy(x, y + 2);
    printf("QUIT\n");

    //커서 이동 처리
    while (1)
    {
        int n = keyControl();//키보드 입력
        switch (n)
        {
        case UP:
            if (y > 16)//y: 12~15
            {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, --y);
                printf(">");
            }
            break;

        case DOWN:
            if (y < 18)//y: 12~15
            {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, ++y);
                printf(">");
            }
            break;

        case SUBMIT:
            return y - 16;// 0, 1, 2 반환
        }
    }
}
