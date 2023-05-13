#include "mainfunction.h"

int main(void) {

	while (1) {

		int menucode = drawMenu();

		if (menucode == 0) {
			
			int modeNum = selectMode();

			if (modeNum == 0) {
				/*하드모드 실행*/
				printf("하드모드");
			}
			else if (modeNum == 1) {
				/*이지모드 실행*/
				printf("이지모드");
			}
			else if (modeNum == 2) {
				/*뒤로*/
				printf("뒤로");
			}
		}
		else if (menucode == 1) {
			drawInfo();
		}
		else if (menucode == 2) {
			return 0;
			system("cls");
		}
	}
	return 0;
}