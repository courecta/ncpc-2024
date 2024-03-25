#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long n = 0, product = 1;
    long double logproduct = 0.0;
    cin >> n;
    unsigned long long array[n];
    for(unsigned long long i = 0 ; i < n ; i++) cin >> array[i];
    for(unsigned long long i = 0 ; i < n ; i++)
    {
        if(array[i] == 0)
        {
        cout << "0" << "\n";
        return 0;
        }
        logproduct += log10(array[i]);
    }

    if(logproduct > 18.1)
    {
    cout << "-1" << "\n";
    return 0;
    }

    for(unsigned long long i = 0 ; i < n ; i++)
    {
            product *= array[i];
            if(product > 1000000000000000000)
            {
            cout << "-1" << "\n";
            return 0;
            }
    }
    
    cout << product << "\n";
    return 0;
}
