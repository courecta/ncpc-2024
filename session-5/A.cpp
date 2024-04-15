#include <iostream>
#include <string>
using namespace std;
#define ll long long

string canReorder(const string s);

int main()
{
  ll t, n;
  string s;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> s;
    cout << canReorder(s) << "\n";
  }

}

string canReorder(const string s)
{
  if(s.length() > 2 || s == "00" || s == "11") return "NO";
  else return "YES";
}

