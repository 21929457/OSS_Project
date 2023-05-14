#include "mainfunction.h"

int main(void) {

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