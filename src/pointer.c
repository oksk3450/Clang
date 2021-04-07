#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
	char buffer[80];
	*p = buffer;
	int len;
	int cnt=0;//문자열역순 구하기에 사용되는 반복제한 회수
	
	printf("문자열을 입력하세요: ");
	scanf("%s", p);//주소인덱스를 가지고 있음.
	len=strlen(p);
	printf("문자열의 길이는 %d 개", len);
	while(*p) {
		p=p+1;//p++ 인덱스주소를 1씩 증가시키기 *p변수에 공백이 나올때까지 반복
	}
	printf("문자열을 역순으로 바꾸기: ");
	while(cnt<len) {
		p = p-1;//p-- 인덱스주소를 1씩 감소시키기
		putchar(*p);//현재 p인덱스 주소의 *p변수값을 1개씩 출력함수 putchar(1글자 출력)
		cnt = cnt + 1;//cnt++
	}
	putchar('\n');//글자를 출력하지 않고, 엔터치는 효과 \newline
	printf("출력한 이후의 인덱스 번호는 %d\n",p);
	getchar();//공백을 입력해서 버퍼내용 삭제하는 효과
	
}