#include "Header.h"

int main()
{
	char license[15];
	char gender = NULL;
	int age = NULL;

	cin >> license;
	if (license[7] == '1' || license[7] == '3')
	{
		gender = 'M';
		if (license[7] == '1')
		{
			age = 2019 - (1900 + ((license[0]-'0') * 10) + (license[1] - '0')) + 1;
			
		}
		else
		{
			age = 2019 - (2000 + ((license[0]-'0') * 10) + (license[1] - '0')) + 1;
			
		}
	}
	if (license[7] == '2' || license[7] == '4')
	{
		gender = 'W';
		if (license[7] == '2')
		{
			age = 2019 - (1900 + ((license[0] - '0') * 10) + (license[1] - '0')) + 1;
			
		}
		else
		{
			age = 2019 - (2000 + ((license[0] - '0') * 10) + (license[1] - '0')) + 1;
			
		}
	}
	cout << age << " " << gender;
}