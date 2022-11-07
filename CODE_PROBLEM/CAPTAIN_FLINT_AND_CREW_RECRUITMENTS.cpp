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
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int n; cin >> n;
        if (n <= 30) {cout << "NO" << '\n';}
        else
        {
            if (n==36 || n==40 || n==44)
            {
                cout << "YES\n";
                cout << "6 10 15 " << n-31 << '\n';
            }
            else
            {
                cout << "YES\n";
                cout << "6 10 14 " << n-30 << '\n';
            }
        }
    }
}
