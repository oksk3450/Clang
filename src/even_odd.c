#include <stdio.h>

void main() {
	int a;
	while(1){//반복문(true)=무한반복(루프문)
		printf("정수를 입력하세요:\n");
		printf("종료할때는 Ctrl+C키를 입력하세요");
		scanf("%d", &a);//scanf함수는 변수앞에 &(어드레스기호)를 붙임.
		if(a==0) {
			//IoT로 전송받은 값이 0이면 반복문종료(아래)
			break;
		}
		//분기문 if문
		if(a%2==0) {
			printf("입력하신 숫자 %d는 짝수입니다.\n", a);
		}
		if(a%2==1) {
			printf("입력하신 숫자 %d는 홀수입니다.\n", a);//변수 a값이 %d에 바인딩 됨.
		}
	}
	printf("프로그램이 종료 되었습니다.\n");
}