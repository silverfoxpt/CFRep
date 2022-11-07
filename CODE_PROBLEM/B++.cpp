#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n; int c = 0;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '+') {c++; break;}
            if (s[j] == '-') {c--; break;}
        }
    }
    cout << c;
}
