#include "Header.h"

int number[105];
int n;
int reverseNumber;

int Reverse(int x)
{
	int reversedNumber = 0;

	while (x > 0)
	{
		reversedNumber *= 10;
		reversedNumber += (x % 10);
		x /= 10;
	}
	return reversedNumber;
}

bool IsPrime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i < x; ++i)
	{
		if ((x % i) == 0)
			return false;
	}
	return true;
}

int main()
{
	// �ڿ��� ���� �Է�
	cin >> n; 
	
	for (int i = 0; i < n; ++i)
	{
		cin >> number[i];
	}
	// �Ҽ����� �Ǻ�
	// 1 or �ڱ��ڽ�
	for (int i = 0; i < n; ++i)
	{
		reverseNumber = Reverse(number[i]);
		if (IsPrime(reverseNumber))
		{
			cout << reverseNumber << " ";
		}
	}
	
}