#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[4], t; cin >> t;
    for(int i = 0 ; i < t ; ++i)
    {
        for(int j = 0 ; j < 4 ; ++j) cin >> array[j];
        sort(array, array+4);
        cout << array[0] * array[2] << "\n";
    }
}