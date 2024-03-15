#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

string shortener(string s);

int main()
{
    int n = 0;
    cin >> n;
    if(n < 0 || n > 100) return 1;
    string input_buffer[n];
    for(int i = 0; i < n; i++) cin >> input_buffer[i];
    for(int i = 0; i < n; i++) cout << shortener(input_buffer[i]) << endl;
    return 0;
}

string shortener(string s)
{
    if(s.length() <= 10) return s;

    string first_letter = s.substr(0, 1);
    int num_letters = s.length() - 2;
    string last_letter = s.substr(s.length() - 1);

    return first_letter + to_string(num_letters) + last_letter;
}