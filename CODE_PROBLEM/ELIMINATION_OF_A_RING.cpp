#include <algorithm>
#include <utility>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <climits>
#include <cctype>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <random>
#include <cmath>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int n; cin >> n; vector<int> a;
        for (int i = 0; i < n; i++) {int x; cin >> x; a.push_back(x); }

        int res = 0;
        int c = 0;
        while(a.size() > 1 && c < a.size())
        {
            n = a.size();
            if (n == 1) {res++; break;}
            if (c == 0)
            {
                if (a[0] != a[n-1] && a[0] != a[1]) {a.erase(a.begin()); c = 0; res++; cout << "YES\n"; }
                else if (a[0] == a[n-1] || a[0] == a[1]) {a.erase(a.begin()); c = 0;}
                else {c++;}
            }
            else if (c == n-1)
            {
                if (a[0] != a[n-1] && a[n-1] != a[n-2]) {a.erase(a.begin() + n-1); c = 0; res++;}
                else if (a[0] == a[n-1] || a[n-1] == a[n-2]) {a.erase(a.begin() + n-1); c = 0; }
                else {c++;}
            }
            else
            {
                if (n >= 3)
                {
                    if (a[c] != a[c-1] && a[c] != a[c+1]) {a.erase(a.begin() + c); c = 0; res++;}
                    else if (a[c] == a[c-1] || a[c] == a[c+1]) {a.erase(a.begin() + c); c = 0; }
                    else {c++;}
                }
            }

            //for (int i = 0; i < a.size(); i++) {cout << a[i] << " ";} cout << '\n';
        }
        cout << res << "\n\n";
    }
}
