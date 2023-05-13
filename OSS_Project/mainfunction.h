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

int selectMode() {
      int x = 20, y = 9;
      system("cls");

        printf("\n\n\n\n\n");
        printf("                        [모드 선택]\n\n");

        gotoxy(x - 2, y);//x-2인 이유: 커서
        printf("> 1. 하드모드");
        gotoxy(x, y + 2);
        printf("2. 이지모드");
        gotoxy(x, y + 4);
        printf("     뒤로");

        while (1)
        {
            int n = keyControl();//키보드 입력
            switch (n)
            {
            case UP:
                if (y > 9)//y: 9~16
                {
                    gotoxy(x - 2, y);
                    printf(" ");
                    y -= 2;
                    gotoxy(x - 2, y);
                    printf(">");
                }
                break;

            case DOWN:
                if (y < 16)//y: 9~16
                {
                    gotoxy(x - 2, y);
                    printf(" ");
                    y += 2;
                    gotoxy(x - 2, y);
                    printf(">");
                }
                break;

            case SUBMIT:
                return (y - 9) / 2;//0, 1, 2 반환
            }
        }
}

int drawMenu()//메뉴 그리기
{
    int x = 24, y = 12;

    gotoxy(x - 2, y);//x-2인 이유: 커서
    printf("> 게임시작");
    gotoxy(x, y + 1);
    printf("조작방법 및 게임 설명");
    gotoxy(x, y + 2);
    printf("  종료 ");

    //커서 이동 처리
    while (1)
    {
        int n = keyControl();//키보드 입력
        switch (n)
        {
        case UP:
            if (y > 12)//y: 12~15
            {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, --y);
                printf(">");
            }
            break;

        case DOWN:
            if (y < 15)//y: 12~15
            {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, ++y);
                printf(">");
            }
            break;

        case SUBMIT:
            return y - 12;// 0, 1, 2 반환
        }
    }
}

void drawInfo() {
    printf("게임 설명");

    while (1)
    {
        if (keyControl() == SUBMIT)
        {
            break;
        }
    }
}