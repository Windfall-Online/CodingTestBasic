#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sum = NULL;
	int count = 0;
	string str;
	getline(cin, str);
	
	for (string::size_type i = 0; i < str.size(); ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum = (sum * 10) + (str[i] - '0');
		}
	}
	for (int i = 1; i <= sum; ++i)
	{
		if ((sum % i) == 0)
			count++;
	}
	cout << sum << endl;
	cout << count << endl;

}