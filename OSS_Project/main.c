#include "mainfunction.h"

int main(void) {

	hideCursor();

	char easyModeWord[10][7] = { "cookie","turtle","belief","wear","beard","oceon","danger","hollow","feather","pilot" };
	char easyModeMeaning[10][12] = { "쿠키","거북이","신념,확신","입다","(턱)수염","대양","위험","구멍,속이 빈","깃털","조종사"};
	char hardModeWord[10][11] = { "telephone","chopstick","dictionary","situtaion","population","comparison","competition","experience","revolution","omnipotent" };
	char hardModeMeaning[10][9] = {"전화","젓가락","사전","상황,사태","인구","비교","경쟁","경험","혁명","전능한"};
	
	srand(GetTickCount());
	int word_Number = chooseNumArray(0, 9);
	int word_size = strlen(easyModeWord[word_Number]);
	char alpabet;
	char chr;
	int menucode = drawMenu();
	system("cls");

	if (menucode == 0) {
		/*이지모드 실행*/
		char currentstat[20];
		printf("<<Easy Mode>>\n");
		int life = drawDice();
		getch();
		for (int i = 3; i >= 1; i--) {
			printf("%d!\n", i); _sleep(1000);
		}
		system("cls");
		printf("게임 시작!\n");

		Init(currentstat, word_size);
		printf("%s\n", currentstat);
		printf("남은 목숨 : %d\n", life);
		printf("+ㅡㅡ+\n");
		printf("｜  ｜\n");
		printf("｜ \n");
		printf("｜       \n");
		printf("｜       \n");
		printf("｜      \n");
		printf("｜      \n");
		printf("｜￣￣￣￣￣｜+\n");
		printf("================\n");

		while (1) {
			printf("\n소문자 알파벳 하나를 입력하세요 :"); 
			scanf("%c", &alpabet);
			scanf("%c", &chr);
		
			int flag = SearchAndPrint(currentstat, easyModeWord[word_Number], alpabet);

			if (flag == 0) {
				printf(" %c 가 단어에 있어요!\n", alpabet);
				printf("%s\n", currentstat);
				printf("남은 목숨 : %d\n", life);
				switch (life) {
				case 8:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ \n");
					printf("｜       \n");
					printf("｜       \n");
					printf("｜      \n");
					printf("｜      \n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 7:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (   )\n");
					printf("｜       \n");
					printf("｜       \n");
					printf("｜      \n");
					printf("｜      \n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 6:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /  ＼\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 5:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /  ＼\n");
					printf("｜ 0   0\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 4:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0   0\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 3 :
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0｜ 0\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 2:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0｜ 0\n");
					printf("｜  /＼\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 1:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0｜ 0\n");
					printf("｜  /＼\n");
					printf("｜￣   ￣\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				}
			}
			else if (flag == -1) {
				printf(" %c는 단어에 없어요..\n", alpabet);
				printf("%s\n", currentstat);
				life -= 1;
				printf("남은 목숨 : %d\n", life);
				switch (life) {
				case 8:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ \n");
					printf("｜       \n");
					printf("｜       \n");
					printf("｜      \n");
					printf("｜      \n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 7:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (   )\n");
					printf("｜       \n");
					printf("｜       \n");
					printf("｜      \n");
					printf("｜      \n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 6:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /  ＼\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 5:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /  ＼\n");
					printf("｜ 0   0\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 4:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0   0\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 3:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0｜ 0\n");
					printf("｜\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 2:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0｜ 0\n");
					printf("｜  /＼\n");
					printf("｜\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				case 1:
					printf("+ㅡㅡ+\n");
					printf("｜  ｜\n");
					printf("｜ (  )\n");
					printf("｜ /｜＼\n");
					printf("｜ 0｜ 0\n");
					printf("｜  /＼\n");
					printf("｜￣   ￣\n");
					printf("｜￣￣￣￣￣｜+\n");
					printf("================\n");
					break;
				}
			}

			int same_check = strcmp(easyModeWord[word_Number], currentstat);
			
			if (life == 0) {
				system("cls");
				gotoxy(50, 4);
				printf("+ㅡㅡ+\n");
				gotoxy(50, 5);
				printf("｜  ｜\n");
				gotoxy(50, 6);
				printf("｜ (x_x)\n");
				gotoxy(50, 7);
				printf("｜ /｜＼\n");
				gotoxy(50, 8);
				printf("｜ 0｜ 0\n");
				gotoxy(50, 9);
				printf("｜  /＼\n");
				gotoxy(50, 10);
				printf("｜￣   ￣\n");
				gotoxy(50, 11);
				printf("｜￣￣￣￣￣｜+\n");
				gotoxy(50, 12);
				printf("================\n");
				gotoxy(50, 13);
				slowPrint(1, "게임오버");
				return 0;
			}
			else if (same_check == -1) {
				system("cls");
				gotoxy(50, 12);
				printf("단어 : %s", easyModeWord[word_Number]);
				gotoxy(50, 13);
				printf("의미 : %s" , easyModeMeaning[word_Number]);
				gotoxy(50, 14);
				slowPrint(1, "정답입니다!!!");
				return 0;
			}
			}
		} 
	else if (menucode == 1) {
	/*하드모드 실행*/
	char currentstat[20];
	printf("<<Hard Mode>>\n");
	printf("**입력 시간 10초, 넘어가면 기회가 줄어듬**\n");
	int life = drawDice();
	getch();
	for (int i = 3; i >= 1; i--) {
		printf("%d!\n", i); _sleep(1000);
	}
	system("cls");
	printf("게임 시작!\n");

	Init(currentstat, word_size);
	printf("%s\n", currentstat);
	printf("남은 목숨 : %d\n", life);
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ \n");
	printf("｜       \n");
	printf("｜       \n");
	printf("｜      \n");
	printf("｜      \n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");

	while (1) {
		int sec = 1000;
		while (1)
		{
			if (kbhit() != NULL)
			{
				break;
			}
			Sleep(10);

			if (sec % 100 == 0)
			{
				if (sec / 100 < 0)
				{
					printf("제한시간 초과, 기회 감소 \n");
					life-=1;
					break;
				}
				printf("%d초 남았어요\n", sec / 100);

			}sec--;
		}
		printf("\n소문자 알파벳 하나를 입력하세요 : ");
		scanf("%c", &alpabet);
		scanf("%c", &chr);

		int flag = SearchAndPrint(currentstat, hardModeWord[word_Number], alpabet);


		if (flag == 0) {
			printf(" %c 가 단어에 있어요!\n", alpabet);
			printf("%s\n", currentstat);
			printf("남은 목숨 : %d\n", life);
			switch (life) {
			case 8:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ \n");
				printf("｜       \n");
				printf("｜       \n");
				printf("｜      \n");
				printf("｜      \n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 7:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (   )\n");
				printf("｜       \n");
				printf("｜       \n");
				printf("｜      \n");
				printf("｜      \n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 6:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /  ＼\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 5:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /  ＼\n");
				printf("｜ 0   0\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 4:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0   0\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 3:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0｜ 0\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 2:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0｜ 0\n");
				printf("｜  /＼\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 1:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0｜ 0\n");
				printf("｜  /＼\n");
				printf("｜￣   ￣\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			}
		}
		else if (flag == -1) {
			printf(" %c는 단어에 없어요..\n", alpabet);
			printf("%s\n", currentstat);
			life -= 1;
			printf("남은 목숨 : %d\n", life);
			switch (life) {
			case 8:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ \n");
				printf("｜       \n");
				printf("｜       \n");
				printf("｜      \n");
				printf("｜      \n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 7:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (   )\n");
				printf("｜       \n");
				printf("｜       \n");
				printf("｜      \n");
				printf("｜      \n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 6:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /  ＼\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 5:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /  ＼\n");
				printf("｜ 0   0\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 4:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0   0\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 3:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0｜ 0\n");
				printf("｜\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 2:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0｜ 0\n");
				printf("｜  /＼\n");
				printf("｜\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			case 1:
				printf("+ㅡㅡ+\n");
				printf("｜  ｜\n");
				printf("｜ (  )\n");
				printf("｜ /｜＼\n");
				printf("｜ 0｜ 0\n");
				printf("｜  /＼\n");
				printf("｜￣   ￣\n");
				printf("｜￣￣￣￣￣｜+\n");
				printf("================\n");
				break;
			}
		}

		int same_check = strcmp(hardModeWord[word_Number], currentstat);

		if (life == 0) {
			system("cls");
			gotoxy(50, 4);
			printf("+ㅡㅡ+\n");
			gotoxy(50, 5);
			printf("｜  ｜\n");
			gotoxy(50, 6);
			printf("｜ (x_x)\n");
			gotoxy(50, 7);
			printf("｜ /｜＼\n");
			gotoxy(50, 8);
			printf("｜ 0｜ 0\n");
			gotoxy(50, 9);
			printf("｜  /＼\n");
			gotoxy(50, 10);
			printf("｜￣   ￣\n");
			gotoxy(50, 11);
			printf("｜￣￣￣￣￣｜+\n");
			gotoxy(50, 12);
			printf("================\n");
			gotoxy(50, 13);
			slowPrint(1, "게임오버");
			return 0;
		}
		else if (same_check == -1) {
			system("cls");
			gotoxy(50, 12);
			printf("단어 : %s", hardModeWord[word_Number]);
			gotoxy(50, 13);
			printf("의미 : %s" , hardModeMeaning[word_Number]);
			gotoxy(50, 14);
			slowPrint(1, "정답입니다!!!");
			return 0;
		}
	}
			
	}
	else if (menucode == 2) {
			return 0;
	}
	return 0;
}
