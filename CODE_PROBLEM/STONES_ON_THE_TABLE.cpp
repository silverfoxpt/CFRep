#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s; char c = s[0]; int res = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != c) {c = s[i];}
        else {res++;}
    }
    cout << res;
}
