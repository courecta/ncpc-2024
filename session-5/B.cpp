#include <iostream>
#include <string>
using namespace std;
#define ll long long

ll sum(string x);
ll beautiful(ll x, ll k);

int main()
{
  ll t, x, k, y;
  cin >> t;
  ll answers[t];
  for(ll i = 0 ; i < t ; ++i)
  {
    cin >> x >> k;
    answers[i] = beautiful(x,k);
  }
  for(ll i = 0 ; i < t ; ++i) cout << answers[i] << "\n";
}

ll sum(string x)
{
  ll sum = 0;
  ll n = x.length() - 1;
  for(ll i = 0 ; i < n ; ++i) sum += x[i];
  cout << sum << 
  return sum;
}

ll beautiful(ll x, ll k)
{
  if(x <= k) return k;
  
  ll i = 2, y = k;
  while(k < x)
  {
    k = y;
    k *= i;
    i++;
  }
}
