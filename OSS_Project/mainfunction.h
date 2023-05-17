#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>

#pragma once


#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

void hideCursor() {
    //커서 숨기는 함수
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = 0;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}
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
int chooseNum(int n1, int n2) {
    return (int) (rand() % (n2 -n1 + 1)) + n1;
}
int chooseNumArray(int n1, int n2) {
    return (int)(rand() % (n2 - n1 + 1)) + n1;
}
void slowPrint(unsigned long speed, const char* s) {
    /*타이핑 효과를 주기 위한 함수
    slowPrint(속도, 출력할 문자열);*/
    int i = 0;
    while (s[i] != 0) {
        printf("%c", s[i++]);
        fflush(stdout);
        Sleep(speed);
    }
}
int drawDice() {

    srand(GetTickCount());
    int lifeNum1 = chooseNum(2, 4);
    int lifeNum2 = chooseNum(2, 4);

    int result = lifeNum1 + lifeNum2;
    slowPrint(1, "('O w O') / 안녕하세요!행맨게임에 오신 걸 환영해요!!\n");
    slowPrint(1, "            게임을 위한 주사위를 주워왔어요.\n" );
    slowPrint(1, "            2~4 외의 숫자는 지워져있네요!? \n");
    slowPrint(1, "            어쩔 수 없죠. 주사위를 굴릴게요 !! \n\n");
    printf("            당신에게 주어진 기회는 %d 번!! \n", result);

    switch (lifeNum1)
    {
    case 2:
        printf(" -------\n");
        printf("| o     |\n");
        printf("|       |\n");
        printf("|     o |\n");
        printf(" -------\n");
        printf(" \n");
        break;
    case 3:
        printf(" -------\n");
        printf("| o     |\n");
        printf("|   o   |\n");
        printf("|     o |\n");
        printf(" -------\n");
        printf(" \n");
        break;

    case 4:
        printf(" -------\n");
        printf("| o   o |\n");
        printf("|       |\n");
        printf("| o   o |\n");
        printf(" -------\n");
        printf(" \n");
        break;
    default:
        printf("error!!");
        break;
    }
    switch (lifeNum2)
    {
    case 2:
        printf(" -------\n");
        printf("| o     |\n");
        printf("|       |\n");
        printf("|     o |\n");
        printf(" -------\n");
        printf(" \n");
        break;
    case 3:
        printf(" -------\n");
        printf("| o     |\n");
        printf("|   o   |\n");
        printf("|     o |\n");
        printf(" -------\n");
        printf(" \n");
        break;

    case 4:
        printf(" -------\n");
        printf("| o   o |\n");
        printf("|       |\n");
        printf("| o   o |\n");
        printf(" -------\n");
        printf(" \n");
        break;
    default:
        printf("error!!");
        break;
    }
    gotoxy(50,25);
    slowPrint(35, "Press any key!!!\n");
    return result;
}
void Init(char currentstat[], int len) { //정답 입력 상태를 초기화 시키는 함수
    for (int i = 0; i < len; i++) {
        currentstat[i] = '_';
    }
    for (int i = len; i <= 20; i++) {
        currentstat[i] = ' ';
    }
}
int SearchAndPrint(char currentstat[], char answer[], char alph) { //사용자가 입력한 문자가 정답에 있는지 검사하고 결과를 출력하는 함수 (존재하면 0, 존재하지 않으면 -1반환)
    int flag = -1;
    for (int i = 0; i < strlen(answer); i++)
        if (answer[i] == alph) {
            currentstat[i] = alph;
            flag = 0; //존재
        }
    return flag;
}