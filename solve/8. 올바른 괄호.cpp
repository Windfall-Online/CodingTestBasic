#include "Header.h"

int main()
{
	char parenthesis[30];
	int result = 0;
	cin >> parenthesis;
	
	for (int i = 0; i < 30; ++i)
	{
		if (result < 0)
			break;

		if (parenthesis[i] == '(')
			result++;
		else if (parenthesis[i] == ')')
			result--;
	}
	
	if (result != 0)
		cout << "NO";
	else
		cout << "YES";

}