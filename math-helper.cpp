/**
* 수학 연산
* 사칙연산을 비롯한 수학적 연산에 관한 메소드를 모아 둔 파일
* 
* @author usageness
* @version 1.0
* @see None
*/

/** 산술 연산 **/

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


// 연산 가능한 수의 범위를 초과하는 큰 수의 덧셈
// #include <string>
// string add_bigNumber(number 1:string, number 2:string)
// return add_result:string
string add_bigNumber(string a, string b) {
	int tmp = 0;
	string res = "", result = "";
	
	while(a.back() || b.back()) {
		if(a.back()) {
			tmp += a.back()-'0';
			a.pop_back();
		}
		if(b.back()) {
			tmp += b.back()-'0';
			b.pop_back();
		}
		
		if(tmp >= 10) {
			res.push_back(((tmp % 10)+'0'));
			tmp /= 10;
		}else{
			res.push_back((tmp+'0'));
			tmp = 0;
		}
	}

	if(tmp != 0) res.push_back((tmp+'0'));

	while(!res.empty()) {
		result.push_back(res.back());
		res.pop_back();
	}

	return result;
}

// 두 정수 중 큰 값을 반환
// int bigger(number 1:int, number 2:int)
// return result:int
int bigger(int a, int b) {
	int res = a > b ? a : b;
	return res;
}
