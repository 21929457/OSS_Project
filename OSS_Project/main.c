#include "mainfunction.h"

int main(void) {

	while (1) {

		int menucode = drawMenu();

		if (menucode == 0) {
			
			int modeNum = selectMode();

			if (modeNum == 0) {
				/*�ϵ��� ����*/
				printf("�ϵ���");
			}
			else if (modeNum == 1) {
				/*������� ����*/
				printf("�������");
			}
			else if (modeNum == 2) {
				/*�ڷ�*/
				printf("�ڷ�");
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