#include "Header.h"

// �Ҽ��� �Ǻ�
// 1 * 36
// 2 * 18
// 1�� �ڱ� �ڽ��� ������ ���� ū ����� 2�� ��������(����)

// 1 * 36
// 2 * 18
// 3 * 12
// 4 * 9
// 6 * 6

// ��Ʈ 36������ ������ �ȴ�


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