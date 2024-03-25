#include <iostream>
#include <string>
using namespace std;

int convert(int n);
string DecimalToBinary(int num);

int main()
{
    int n;
    cin >> n;
    cout << convert(n);
}

int convert(int n)
{
    string binary = DecimalToBinary(n);
    char* temp = &binary.back();
    int zeros = 0, i = 0;
    while(*(temp - i) == '0')
    {
        zeros++;
        i++;
    }

    return zeros;
}

string DecimalToBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}