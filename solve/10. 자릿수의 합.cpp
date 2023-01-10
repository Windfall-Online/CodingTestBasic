#include "Header.h"


int digit_sum(int x)
{
	int sum = 0;

	while (x != 0)
	{
		sum += x % 10;
		x /= 10;
	}

	return sum;
}

int main()
{
	int input;
	int maxNum = 0;
	int maxResult = 0;
	cin >> input;

	while (input != 0)
	{
		input--;
		int temp = 0;
		cin >> temp;
		if (digit_sum(temp) > maxResult)
		{
			maxResult = digit_sum(temp);
			maxNum = temp;
		}	
		else if(digit_sum(temp) == maxResult)
		{
			if (temp > maxNum)
				maxNum = temp;
		}
	}

	cout << maxNum;
}