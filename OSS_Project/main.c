#include "mainfunction.h"
#include <stdlib.h>

int main(void) {
	char* easyModeWord[10] = { "cookie","turtle","belief","wear","beard","oceon","danger","hollow","feather","pilot"};
	char* hardModeWord[10] = { "telephone","chopstick","dictionary","situtaion","population","comparison","competition","experience","revolution","omnipotent" };

	/*
	srand(GetTickCount());
	int arrayNum = chooseNumArray(0, 9);
	printf(easyModeWord[arrayNum]);
	*/
	// 단어 뽑는 난수 1개

	while (1) {
		int menucode = drawMenu();
		system("cls");

		if (menucode == 0) {
			/*이지모드 실행*/
			printf("<<Easy Mode>>\n");
			drawDice();
			break;
		}
		else if (menucode == 1) {
			/*하드모드 실행*/
			printf("<<Hard Mode>>");
			break;
		}
		else if (menucode == 2) {
			return 0;
		}
	}
	return 0;
}
