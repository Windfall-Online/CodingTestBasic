#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	vector<char> v1;
	getline(cin, str);
	
	for (string::size_type i = 0; i < str.size(); ++i)
	{
		if (str[i] != ' ')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 'a'-'A';
				v1.push_back(str[i]);
			}
			else
			{
				v1.push_back(str[i]);
			}
		}
	}
	for (vector<char>::size_type i = 0; i < v1.size(); ++i)
	{
		cout << v1[i];
	}
}