#include "mainfunction.h"
#include <stdlib.h>

int main(void) {
	char* easyModeWord[10] = { "cookie","turtle","belief","wear","beard","oceon","danger","hollow","feather","pilot"};
	char* hardModeWord[10] = { "telephone","chopstick","dictionary","situtaion","population","comparison","competition","experience","revolution","omnipotent" };
	
	/*
	srand(GetTickCount());
	int lifeNum1 = chooseNum(2,4);
	int lifeNum2 = chooseNum(2,4);
	printf("�� ���  : %d" , lifeNum1 + lifeNum2);
	*/
	//�����ϰ� ���� 2��
	
	/*
	srand(GetTickCount());
	int arrayNum = chooseNumArray(0, 9);
	printf(easyModeWord[arrayNum]);
	*/
	// �ܾ� �̴� ���� 1��

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