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
			/*���� ����*/
			printf("���ư��� (1)\n");
			scanf("%d" , back);
			}
	} while (temp != 3);





	if (mode == 1) {
		/*�������� ���� ����*/
		printf("a");
	}
	else if(mode == 2) {
		/*�ϵ���� ���� ����*/
		printf("b");
	}
	else if (mode == 3) {
		/*�ʹ� �޴� ���úκ�*/
		printf("c");
			}
}