#include <iostream>
using namespace std;

int main()
{
    int num1 = NULL;
    int num2 = NULL;
    int sum = NULL;
    
    
    cin >> num1;
    cin >> num2;        
    
    for (int i = num1; i <= num2; ++i)
    {
        if (i < num2)
        {       
            sum += i;
            cout << i << " + ";
        }
        else
        {
            sum += i;
            cout << i << " = " << sum;
        }

    }
    
}

