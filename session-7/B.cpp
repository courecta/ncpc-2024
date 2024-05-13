#include <cstdio>

int main()
{
    long n, x;
    scanf("%ld", &n);
    for(long i = 0 ; i < n ; ++i)
    {
        scanf("%ld", &x);
        printf("%ld ", (n + 1) - x);
    }
    puts("");
}