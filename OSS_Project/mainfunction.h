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

int keyControl()//Ű���� �̺�Ʈ ó��
{
    char temp = _getch();//Ű���� �Է�
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
        printf("                        [��� ����]\n\n");

        gotoxy(x - 2, y);//x-2�� ����: Ŀ��
        printf("> 1. �ϵ���");
        gotoxy(x, y + 2);
        printf("2. �������");
        gotoxy(x, y + 4);
        printf("     �ڷ�");

        while (1)
        {
            int n = keyControl();//Ű���� �Է�
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
                return (y - 9) / 2;//0, 1, 2 ��ȯ
            }
        }
}

int drawMenu()//�޴� �׸���
{
    int x = 24, y = 12;

    gotoxy(x - 2, y);//x-2�� ����: Ŀ��
    printf("> ���ӽ���");
    gotoxy(x, y + 1);
    printf("���۹�� �� ���� ����");
    gotoxy(x, y + 2);
    printf("  ���� ");

    //Ŀ�� �̵� ó��
    while (1)
    {
        int n = keyControl();//Ű���� �Է�
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
            return y - 12;// 0, 1, 2 ��ȯ
        }
    }
}

void drawInfo() {
    printf("���� ����");

    while (1)
    {
        if (keyControl() == SUBMIT)
        {
            break;
        }
    }
}