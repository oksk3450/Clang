#include <stdio.h> //#으로 시작하는 명령어는 매크로명렁어라고 함.
#define AGE 28
#define PI 3.14592
#define NAME "정도영"
const int a=10; //const로 상수를 정의;
const float b=10.56789;
const char c='K'; //char 단일문자 타입
const char *OPEN="오픈소스그룹"; //char* 포인터변수

void main() {
	int i=28; float j=4.0; char k='A';
	char ch[10]="홍길동";//배열문자
	char *p="프로그래머";//포인터변수
	printf("기관은 %s\n 이름은 %s\n 나이는 %d\n", OPEN,NAME,AGE);
	printf("-----------------------\n");
	printf("%s %s\n나이는 %d\n직급은 %c평점은 %f", p,ch,i,k,j);
}