#include <iostream>
#include <cmath>
using namespace std;

long long int test(int n, int questions[]);

int main()
{
    int n = 0;
    cin >> n;
    if(n < 1 || n > 100) return 0;
    int questions[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> questions[i];
        if(questions[i] < 1 || questions[i] > pow(10,9)) return 0;
    }

    cout << test(n, questions) << endl;

    return 0;
}

long long int test(int n, int questions[])
{
    if(n == 1) return questions[0];

    long long int steps = questions[0];
    for(int i = 1; i < n; i++) steps += questions[i] + i * (questions[i] - 1);
    return steps;
}