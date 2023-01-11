#include "Header.h"

int pSum[1001];
int student;
int number;
int answer;

int main()
{
	for (int i = 1; i <= 1000; ++i)
	{
		pSum[i] = i + pSum[i - 1];
	}
	
	cin >> student;
	for (int i = 0; i < student; ++i)
	{
		cin >> number;
		cin >> answer;
		if (answer == pSum[number])
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}