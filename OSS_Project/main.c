#include "mainfunction.h"


int main(void) {

	hideCursor();

	char easyModeWord[10][7] = { "cookie","turtle","belief","wear","beard","oceon","danger","hollow","feather","pilot" };
	char easyModeMeaning[10][12] = { "쿠키","거북","신념,확신","입다","(턱)수염","대양","위험","구멍,속이 빈","깃털","조종사"};
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
		printf("남은 목숨 : %d\n", life);
		printf("%s\n", currentstat);

		while (1) {
			printf("\n소문자 알파벳 하나를 입력하세요 :"); 
			scanf("%c", &alpabet);
			scanf("%c", &chr);

			int flag = SearchAndPrint(currentstat, easyModeWord[word_Number], alpabet);

			if (flag == 0) {
				printf(" %c 가 단어에 있어요!\n", alpabet);
				printf("%s\n", currentstat);
				printf("남은 목숨 : %d\n", life);
			}
			else if (flag == -1) {
				printf(" %c는 단어에 없어요..\n", alpabet);
				printf("%s\n", currentstat);
				life -= 1;
				printf("남은 목숨 : %d\n", life);
			}
			int same_check = strcmp(easyModeWord[word_Number], currentstat);
			
			if (life == 0) {
				system("cls");
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
			
	}
	else if (menucode == 2) {
			return 0;
	}
	return 0;
}
