#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
#include <set>
#include <cstdio>
#include <iomanip>
#include <cctype>
#include <utility>
#include <cmath>
#include <climits>
#include <windows.h>
using namespace std;

int main()
{
    string s; cin >> s; int m; cin >> m;
    int n = s.length(); s = ' ' + s;
    int a[n+1]; a[0] = a[n] = 0;
    for (int i = 1; i <= n-1; i++)
    {
        if (s[i] == s[i+1]) {a[i] = 1;} else {a[i] = 0;}
    }

    int b[n+1]; b[0] = 0;
    for (int i = 1; i <= n; i++) {b[i] = b[i-1] + a[i];}

    for (int i = 0; i < m; i++)
    {
        int l,r; cin >> l >> r;
        cout << b[r-1] - b[l-1] << '\n';
    }
}
