#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
#define ll unsigned long long
#define im "IMPOSSIBLE"
#define nl "\n"

string sum(ll n, ll x, ll array[]);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n = 0, x = 0;
    cin >> n >> x;
    ++n;
    ll array[n];
    for( ll i = 1; i < n ; ++i) cin >> array[i];
    cout << sum(n,x,array) << nl;
}

string sum(ll n, ll x, ll array[])
{
    unordered_map <int, int> hashmap;
    ll complement = 0;
    for(ll i = 1 ; i < n ; ++i)
    {
        complement = x - array[i];
        auto it = hashmap.find(complement); 
        if(it != hashmap.end()) return to_string(it->second) + " " + to_string(i);
        hashmap.insert({array[i], i});
    }
    return im;
}