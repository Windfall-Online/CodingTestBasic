#include "Header.h"
using namespace std;

int main()
{
	int count;
	int age;
	int maxAge = -2100000000;
	int minAge = 2100000000;

	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		cin >> age;
		if (age > maxAge)
			maxAge = age;
		if (age < minAge)
			minAge = age;
	}
	cout << maxAge - minAge;


}