#include <iostream>
using namespace std;

int main()
{
    long t; cin >> t;
    long a, b, c;
    while(t--)
    {
        cin >> a >> b >> c;
        if((b % 3) && ((b % 3) + c < 3))
        {
            cout << -1 << "\n";
            continue;
        }
        cout << a + ((b + c + 2) / 3) << "\n";
    }
}