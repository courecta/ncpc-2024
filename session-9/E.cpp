#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define mp make_pair
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast_io;
    
    ll n; cin >> n;
    vector <ll> h(n + 1);

    for(ll i = 0 ; i < n ; i++) cin >> h[i];
    vector <ll> min_cost(n + 1, 0);

    min_cost[1] = abs(h[1] - h[0]);

    for(ll i = 2 ; i < n ; i++) min_cost[i] = min(min_cost[i - 1] + abs(h[i] - h[i - 1]), min_cost[i - 2] + abs(h[i] - h[i - 2]));
    
    cout << min_cost[n - 1] << "\n";

    return 0;
}