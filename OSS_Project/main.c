#include "mainfunction.h"
#include <stdlib.h>

int main(void) {
	char* easyModeWord[10] = { "cookie","turtle","belief","wear","beard","oceon","danger","hollow","feather","pilot"};
	char* hardModeWord[10] = { "telephone","chopstick","dictionary","situtaion","population","comparison","competition","experience","revolution","omnipotent" };
	printf("aaa");
	/*
	srand(GetTickCount());
	int lifeNum1 = chooseNum(2,4);
	int lifeNum2 = chooseNum(2,4);
	printf("총 목숨  : %d" , lifeNum1 + lifeNum2);
	*/
	//랜덤하게 숫자 2개
	
	/*
	srand(GetTickCount());
	int arrayNum = chooseNumArray(0, 9);
	printf(easyModeWord[arrayNum]);
	*/
	// 단어 뽑는 난수 1개

	while (1) {
		int menucode = drawMenu();

		if (menucode == 0) {
			/*하드모드 실행*/
			printf("하드모드");
		}
		else if (menucode == 1) {
			/*이지모드 실행*/
			printf("이지모드");
		}
		else if (menucode == 2) {
			return 0;
		}
	}
	return 0;
}