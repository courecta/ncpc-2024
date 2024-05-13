#include <cstdio>
#define ll long long

int main()
{   
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    long t;
    ll a, b, m;
    scanf("%ld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld", &a, &b, &m);
        printf("%lld\n", (m + a) / a + (m + b) / b);
    }
}