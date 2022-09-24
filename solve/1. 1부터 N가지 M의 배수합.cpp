#include <iostream>
using namespace std;


int main()
{
    int num1 = NULL;
    int num2 = NULL;
    int sum = NULL;

    cin >> num1;
    cin >> num2;
    for (int i = 1; i <= num1; ++i)
    {
        if ((i % num2) == 0)
        {
            sum += i;
        }
    }

    cout << sum;
}

