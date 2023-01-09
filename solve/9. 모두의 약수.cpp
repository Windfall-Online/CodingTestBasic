#include "Header.h"


int result[50001];
int input;

int main()
{
	cin >> input;

	for (int i = 1; i <= input; ++i)
	{
		for (int j = i; j <= input; j = j + i)
		{
			result[j]++;
		}
	}
	for (int i = 1; i <= input; ++i)
	{
		cout << result[i] << " ";
	}
}