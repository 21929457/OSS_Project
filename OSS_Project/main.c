#include <stdio.h>

int main(void) {
	int temp,mode = 0;
	
	do {
		/* �ʹ� �޴� ���� �κ�*/
		scanf("%d", temp);

		if (temp == 1) {
			printf("1.Easy Mode");
			printf("2.Hard Mode");
			printf("3.return to menu");
			scanf("%d", mode);

			if (mode == 1) {
				/*�������� ���� ����*/
			}
			else if(mode == 2) {
				/*�ϵ���� ���� ����*/
			}
			else if (mode == 3) {
				/*�ʹ� �޴� ���úκ�*/
				continue;
			}
		}
	} while (temp != 3);
}