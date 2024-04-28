#include <iostream>
#include <vector> 
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);

  long n; cin >> n;
  string s; cin >> s;

  long a = 0, b = 0;
  for(int i = 0 ; i < s.length() ; ++i)
  {
    if(s[i] == 'L'){++a;}
    else{++b;}
  }

  long ans = -1, x = 0, y = 0;
  for(long i = 0 ; (i + 1) < s.length() && ans < 0 ; ++i)
  {
    if(s[i] == 'L') {++x;}
    else {++y;}
    if((x != a - x) && (y != b - y)) {ans = i + 1;}
  }

  cout << ans << "\n";

}
