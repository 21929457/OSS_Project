#include "mainfunction.h"

void hideCursor() {
	//커서 숨기는 함수
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

int main(void) {
	hideCursor();

	while (1) {
		char easyModeWord[10][7] = {"cookie","turtle","belief","wear","beard","oceon","danger","hollow","feather","pilot"};
		char hardModeWord[10][11] = {"telephone","chopstick","dictionary","situtaion","population","comparison","competition","experience","revolution","omnipotent"};
		char alpabet;

		int menucode = drawMenu();
		system("cls");
		
		if (menucode == 0) {
			/*이지모드 실행*/
			char currentstat[20];
			int word_Number = chooseNumArray(0, 9);
			int word_size = strlen(easyModeWord[word_Number]);

			printf("<<Easy Mode>>\n");
			int life = drawDice();
			getch();
			Init(currentstat, word_size);
			for (int i = 3; i >= 1; i--) {
				printf("%d!\n", i); _sleep(1000);
			}
			system("cls");
			printf("게임 시작!");
			printf("%s" , currentstat);
			break;
		}
		else if (menucode == 1) {
			/*하드모드 실행*/
			int word_Number = chooseNumArray(0, 9);
			int word_size = strlen(easyModeWord[word_Number]);
			
			printf("소문자 알파벳 하나를 입력하세요 : ");
			scanf("%c", &alpabet);

			break;
		}
		else if (menucode == 2) {
			return 0;
		}
	}
	return 0;
}
