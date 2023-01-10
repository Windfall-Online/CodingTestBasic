#include "Header.h"

// 풀이
// 1자리 숫자는 총 9개 = 9개
// 2자리 숫자는 총 90개 = 2 * 90으로 180개의 숫자사용
// 3자리 숫자는 총 900개 = 3 * 900으로 2700개의 숫자사용

// N이 256이면?
// 3자리 숫자이니까 2자리숫자까지는 다 사용했음
// 256 - 99를해서 157이나옴
// 157 * 3을 한 값에 189를 더해줌


int main()
{
	int n;
	int number = 1;
	int total = 9;
	int sum = 0;
	int res = 0;
	
	// n = 입력값
	// number = 자릿수 1의자리는1 2의자리는 2
	// total = 그 자리의 숫자 총 개수 1의 자리는9개 2의자리는 90개
	// number가 1이면 total이 9 number가 2면 total은 90
	// sum = 총 갯수 99면 1의자리 갯수와 2의자리 갯수가 더해진 수
	// res = 총 쓰여진 숫자의 갯수 

	cin >> n;

	while (sum + total < n)
	{	
		// 자릿수와 숫자의 총 개수 곱해준걸 더함
		res += total * number;

		// 몇자리 숫자까지 커버하는지 알기 위해서
		// sum에 total을 계속 더해줌
		sum += total;
		
		// 자릿수 증가
		number++;

		// 총 개수 증가
		total *= 10;
	}

	res += (n - sum) * number;
	cout << res;

}