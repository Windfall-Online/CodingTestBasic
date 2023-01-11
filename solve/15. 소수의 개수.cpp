#include "Header.h"

// 소수의 판별
// 1 * 36
// 2 * 18
// 1과 자기 자신을 제외한 가장 큰 약수는 2로 나눈값임(절반)

// 1 * 36
// 2 * 18
// 3 * 12
// 4 * 9
// 6 * 6

// 루트 36까지만 돌리면 된다


int main()
{
	int n;
	int count = 0;
	

	cin >> n;
	
	for (int i = 2; i <= n; ++i)
	{	
		bool isPrime = true;
		for (int j = 2; j * j <= i; ++j)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}

		}
		if (isPrime)
			count++;
	}
	cout << count;
}