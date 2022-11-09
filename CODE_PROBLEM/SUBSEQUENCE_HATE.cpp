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
        string s; cin >> s; int n = s.length();
        int first = (s[0] == '0') ? 0 : 1;
        int last = (s[n-1] == '0') ? 0 : 1;

        vector<int> zeros, ones; char cur = s[0]; int c = 0; int oneCount = 0, zeroCount = 0;
        for (int i = 0 ; i < n; i++)
        {
            if (cur == '0') {zeroCount++;} else {oneCount++;}
            if (s[i] == cur) {c++;}
            else
            {
                if (cur == '0') {zeros.push_back(c);}
                else {ones.push_back(c); }
                c = 1; cur = s[i];
            }
        }
        if (cur == '0') {zeros.push_back(c);} else {ones.push_back(c);}

        int mini = 1000000;
        if (zeros.size() + ones.size() <= 2) {cout << 0 << '\n'; continue;}

        for (int i = 0; i < zeros.size(); i++)
        {
            int bw = i;
            if (bw >= 0 && bw < ones.size())
            {
                mini = min(mini, (zeroCount - zeros[i]) + (oneCount - ones[bw]));
                //cout << oneCount << '\n';
            }

            int fw = i+1;
            if (fw >= 0 && fw < ones.size())
            {
                mini = min(mini, (zeroCount - zeros[i]) + (oneCount - ones[fw]));
                //cout << mini << '\n';
            }
        }
        mini = min(mini, zeroCount); mini = min(mini, oneCount);
        cout << mini << "\n";
    }
}

