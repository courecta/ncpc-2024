#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
  ll t = 0, m = 0, k = 0, d = 0;
  string s;
  cin >> t;
  ll array[t];
  for(ll i = 0 ; i < t ; ++i)
  {
  cin >> s;
  m = stoi(s);
  k = s.length() - 1;
  d = m - pow(10,k);
  array[i] = d; 
  }
  for(ll i = 0 ; i < t ; ++i) cout << array[i] << "\n";
}
