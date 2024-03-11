#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

double greatest_drop(int p, int a, int b, int c, int d, int n);
int check_values(int p, int a, int b, int c, int d, int n);
int main()
{
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;
    if(check_values(p, a, b, c, d, n) == 1) cout << "Invalid input" << endl;
    else cout << greatest_drop(p, a, b, c, d, n) << endl;
    
    return 0;
}

double greatest_drop(int p, int a, int b, int c, int d, int n)
{
    double drops[n];
    double greatestDrop = 0;
    double prices[n];
    int k = 0;

    for(int i = 0; i < n; i++) prices[i] = p * (sin((a * i) + b) + cos((c * i) + d) + 2);
    
    for(int i = 0; i < n; i++)
    {
        if(prices[i] > prices[i + 1])
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                if(prices[i] < prices[j])
                {
                    drops[k] = prices[i] - prices[j];
                    k++;
                }
            }
        }
    }

    for(int i = 0 ; i < n ; i++ ) cout << drops[i] << endl;

    return *max_element(drops, drops + n);
}

int check_values(int p, int a, int b, int c, int d, int n)
{
 if(p <= 0 || p > 1000 || a < 0 || b < 0 || c < 0 || d < 0 || n <= 0 || a > 1000 || b > 1000 || c > 1000 || d > 1000 || n > pow(10,6)) return 1;

    return 0;
}