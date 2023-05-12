#include <stdio.h>
#include "main.h"

int main(void) {

	int temp,mode,back = 0;

	do {
		void startMenu();
		scanf("%d", &temp);

		if (temp == 1) {
			void selectMode();
			scanf("%d", &mode);
			temp = 3;
		}
		else  if(temp == 2) {
			/*게임 설명*/
			printf("돌아가기 (1)\n");
			scanf("%d" , back);
			}
	} while (temp != 3);





	if (mode == 1) {
		/*이지모드로 게임 연결*/
		printf("a");
	}
	else if(mode == 2) {
		/*하드모드로 게임 연결*/
		printf("b");
	}
	else if (mode == 3) {
		/*초반 메뉴 선택부분*/
		printf("c");
			}
}