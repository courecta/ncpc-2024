#include <iostream>
#include <string>
using namespace std;
#define ll long long

int count_moves(ll int n, string sequence);

int main()
{
  ll int t = 0;
  cin >> t;
  if(t < 0 || t > 2000) return 0;
  string input[2 * t];
  for(ll int i = 0 ; i < 2 * t ; i++)
  {
    cin >> input[i];
    if(i % 2 == 0)
    {
      if(stoi(input[i]) < 2 || stoi(input[i]) > 50) return 0;
    }
  }

  for(ll int i = 1 ; i < 2 * i ; i += 2) cout << count_moves(stoi(input[i]), input[i + 1]) << "\n";

}

int count_moves(ll int n, string sequence)
{
  
  ll int moves = 0;
  char selected;
  ll int a = 0, b = 0;
  for(ll int i = 0 ; i < n ; )
  {
    selected = sequence[i];
    if(selected == '(') a++;
    else b++;

    i++;

    if(selected == ')') a--;
    else b--;

    ll j = 1;
    if(a < 0)
    {
      while(1)
      {
        if(sequence[i + j])
      }
    }
  }


}
