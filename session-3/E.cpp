#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int n, year, q;
    string s;
    unordered_map < int, string > hashmap;
    cin >> n;
    for(int i ; i < n ; i++)
    {
        cin >> s >> year;
        hashmap.insert({year, s});
    }
    cin >> q;
    for(int i ; i < q ; i++)
    {
        cout << hashmap[]
    }
}