#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

#define ll long long

ll int highest(ll int N, ll int D, string num);

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    string line;
    int N = 0, D = 0;
    string num;
    if(in.is_open())
    {
        while (in >> N >> D >> num)
        {
            if(D < 0 || D >= N || N > pow(10, 5)) break;
            out << highest(N,D,num) << endl;
        }
        in.close();
    } else cerr << "Unable to open file" << endl;

    in.close();
    out.close();
    return 0;
}

ll int highest(ll int N, ll int D, string num)
{
    // sort(num, num + 1);
    for(int i = 0 ; i < N ; i++)
    {
        
    }
}