#include "Header.h"

int number[10];
char input[105];
int maxNum;
int maxIndex = -1;

int main()
{
	
	// 자연수 입력
	cin >> input;

	// 해당 인덱스에 1추가

	for (int i = 0; i < 100; ++i)
	{
		number[input[i] - '0']++;
	}

	// 제일 큰 인덱스의 값 판별
	for (int i = 0; i < 10; ++i)
	{
		if (input[i] >= maxNum)
		{
			if (i > maxIndex)
			{
				maxIndex = i;
			}
		}
	}
	// 출력
	cout << maxIndex;
	

}