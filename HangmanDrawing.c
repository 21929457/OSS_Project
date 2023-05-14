#include <stdio.h>

int main() {
    //행맨이 매달리는 순서대로 그림
	//최대 기회가 8번이므로 최대 단계는 8개임
	//이후 swith case문으로 동작하게 할 예정
	//기회 8번 : 1-머리 > 2-팔 > 3-손 > 4-몸통1 > 5-몸통2 > 6-다리 > 7-발 > 8-표정
	//기회 7번 : 1-머리 > 2-팔 > 3-손 > 5-몸통1+몸통2 > 6-다리 > 7-발 > 8-표정
	//기회 6번 : 1-머리 > 3-팔+손 > 4-몸통1 > 5-몸통2 > 7-다리+발 > 8-표정
	//기회 5번 : 1-머리 > 3-팔+손 > 5-몸통+1+몸통2 > 7-다리+발 > 8-표정
	//기회 4번 : 1-머리 > 3-팔+손 > 5-몸통1+몸통2 >8-다리+발+표정


	//1단계 : 머리
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (   )\n");
	printf("｜       \n");
	printf("｜       \n");
	printf("｜      \n");
	printf("｜      \n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");

	//2단계 : 팔
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (  )\n");
	printf("｜ /  ＼\n");
	printf("｜\n");
	printf("｜\n");
	printf("｜\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");

	//3단계 : 손
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (  )\n");
	printf("｜ /  ＼\n");
	printf("｜ 0   0\n");
	printf("｜\n");
	printf("｜\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");
	
	//4단계 : 몸통 1
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (  )\n");
	printf("｜ /｜＼\n");
	printf("｜ 0   0\n");
	printf("｜\n");
	printf("｜\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");

	//5단계 : 몸통 2
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (  )\n");
	printf("｜ /｜＼\n");
	printf("｜ 0｜ 0\n");
	printf("｜\n");
	printf("｜\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");

	//6단계 : 다리
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (  )\n");
	printf("｜ /｜＼\n");
	printf("｜ 0｜ 0\n");
	printf("｜  /＼\n");
	printf("｜\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");
	
	//7단계 : 발
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (  )\n");
	printf("｜ /｜＼\n");
	printf("｜ 0｜ 0\n");
	printf("｜  /＼\n");
	printf("｜￣   ￣\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");

	//8단계 : 표정
	printf("+ㅡㅡ+\n");
	printf("｜  ｜\n");
	printf("｜ (x_x)\n");
	printf("｜ /｜＼\n");
	printf("｜ 0｜ 0\n");
	printf("｜  /＼\n");
	printf("｜￣   ￣\n");
	printf("｜￣￣￣￣￣｜+\n");
	printf("================\n");
}