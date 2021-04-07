/* 팩토리얼은 수학에서 수열단원 6! = 6*5*4*3*2*1 */
#define ONE 1
int factorial(int n) {
	if(n>ONE) {
		return(n*factorial(n-1));//재귀함수호출
	}else{
		//n-1 반복되다가 n이 1이 될 경우 실행
		return(ONE);
	}
}