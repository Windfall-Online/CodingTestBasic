#include <iostream>
using namespace std;

int main()
{
    int num1;
    int sum = 1;
    cin >> num1;
    cout << 1;
    for (int i = 2; i < num1; ++i)
    {
        if ((num1 % i) == 0)
        {
            sum += i;
            cout << " + " << i;
        }
    }
    cout << " = " << sum;
    
}

