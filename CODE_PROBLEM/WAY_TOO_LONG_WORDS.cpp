#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int counter = 0; counter < t; counter++)
    {
        string s; cin >> s;
        if (s.length() <= 10) { cout << s << '\n';}
        else
        {
            cout << s[0] << s.length()-2 << s[s.length()-1] << '\n';
        }
    }
}
