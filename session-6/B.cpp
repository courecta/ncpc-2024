#include <iostream>
#define ll long long
#define nl "\n"
using namespace std;

void print(ll n);
ll t, nsquare, temp, multiplier;

int main()
{
  ll n;
  cin >> t;
  for(ll i = 0 ; i < t ; ++i)
  {
    cin >> n;
    print(n);
  }
}

void print(ll n)
{
  temp = 0;
  multiplier = 1;
  if(n == 1)
  {
    cout << "##" << nl << "##" << nl;
    return;
  }
  n *= 2;
  nsquare = n * n;
  n /= 2;
  for(ll i = 0 ; i < nsquare ; )
  {
    if(i == (n * multiplier) && i != 0)
    {
      cout << nl;
      if(temp == 0)
      {
        temp = 1;
      } else temp = 0;
      
    }
    if (temp == 0)
    {
      cout << "##";
      temp = 1;
    }
    if(temp == 1)
    {
      cout << "..";
      temp = 0;
    }
    i += 2;
  }
  return;
}
