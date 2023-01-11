#include "Header.h"

char first[105];
char second[105];

int firstAlphabet[52];
int secondAlphabet[52];
bool isAnagram = true;

int main()
{
	cin >> first;
	cin >> second;

	
		

	for (int i = 0; first[i] != '\0'; ++i)
	{
		if (first[i] >= 'A' && first[i] <= 'Z')
		{
			firstAlphabet[first[i] - 'A']++;
		}
		else
		{
			firstAlphabet[first[i] - 71]++;
		}
	}
	for (int i = 0; second[i] != '\0'; ++i)
	{
		if (second[i] >= 'A' && second[i] <= 'Z')
		{
			secondAlphabet[second[i] - 'A']++;
		}
		else
		{
			secondAlphabet[second[i] - 71]++;
		}
	}
	for (int i = 0; i < 52; ++i)
	{
		if (firstAlphabet[i] != secondAlphabet[i])
		{
			isAnagram = false;
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	
	
	
}