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
        int n; cin >> n; char c; cin >> c;
        string s; cin >> s; s += s; int n2 = s.length();

        if (c == 'g') {cout << 0 << '\n'; continue;}
        int a[n2]; for (int i = 0; i < n2; i++) {a[i] = 0;}
        vector<int> notGreen;

        for (int i = 0; i < n2; i++)
        {
            if (s[i] == 'g')
            {
                for (int j = 0; j < notGreen.size(); j++)
                {
                    a[notGreen[j]] = i;
                }
                notGreen.clear();
            }
            else {notGreen.push_back(i); }
        }

        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                int p = a[i]; int waitTime;
                if (p >= n)
                {
                    waitTime = (n-1-i) + 1 + (p-n);
                }
                else { waitTime = p - i;}
                maxi = max(maxi, waitTime);
            }
        }
        cout << maxi << "\n";
    }
}
