#include "mainfunction.h"

int main(void) {

	while (1) {

		int menucode = drawMenu();

		if (menucode == 0) {
			/*�ϵ��� ����*/
			printf("�ϵ���");
		}
		else if (menucode == 1) {
			/*������� ����*/
			printf("�������");
		}
		else if (menucode == 2) {
			return 0;
		}
	}
	return 0;
}