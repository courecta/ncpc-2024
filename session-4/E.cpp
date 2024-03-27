#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll cost( ll n );

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int run = 0, n = 0;
    do
    {
        cin >> n;
        if(n == 0) return 0;
        run = cost(n);
    } while(run == 0);
    return 0;
}

ll cost( ll n )
{
    ll values[n];
    for(ll i = 0 ; i < n ; ++i) cin >> values[i];
    sort(values, values + n);
    ll sum = values[0], total = 0;
    for(ll i = 1 ; i < n ; ++i)
    {
        sum += values[i];
        total += sum;
    }
    cout << total << "\n";
    return 0;
}