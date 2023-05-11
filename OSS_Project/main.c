#include <stdio.h>

int main(void) {
	int temp,mode = 0;
	
	do {
		/* 초반 메뉴 선택 부분*/
		scanf("%d", temp);

		if (temp == 1) {
			printf("1.Easy Mode");
			printf("2.Hard Mode");
			printf("3.return to menu");
			scanf("%d", mode);

			if (mode == 1) {
				/*이지모드로 게임 연결*/
			}
			else if(mode == 2) {
				/*하드모드로 게임 연결*/
			}
			else if (mode == 3) {
				/*초반 메뉴 선택부분*/
				continue;
			}
		}
	} while (temp != 3);
}