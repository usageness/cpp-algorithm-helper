/**
* 수학 연산
* 사칙연산을 비롯한 수학적 연산에 관한 메소드를 모아 둔 파일
* 
* @author usageness
* @version 1.0
* @see None
*/


// 분할 정복을 이용한 나머지 연산
// int pow_modulo(Base:int, Power:int, Divisor:int)
// return Remainder:int
int pow_modulo(int a, int b, int c) {
	if(b == 0) return 1;
	
	int result = pow_modulo(a, b/2, c);
	result = result * result % c;
	
	if(b%2 == 0) return result;
	else return a * result % c;
}
