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

#pragma GCC optimize("O3")

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string t,p; cin >> t >> p;
    long long n = t.length(); long long a[n]; for (long long i = 0; i < n; i++) {cin >> a[i];}

    long long l = 1, r = t.length(); long long ans = 0;
    while(l <= r)
    {
        vector<long long> rev;
        long long mid = l + (r-l)/2;
        for (long long i = 0; i < mid; i++)
        {
            rev.push_back(a[i]);
        }
        sort(rev.begin(), rev.end());

        long long c = 0;
        string s = "";
        for (long long i = 0; i < n; i++)
        {
            if (i != rev[c]-1) {s += t[i];}
            else {c++;}
        }
        //cout << mid << " " << s << '\n';

        //s is newstring now
        c = 0;
        for (long long i = 0; i < s.length(); i++)
        {
            if (s[i] == p[c]) {c++;}
        }
        if (c == p.length()) { ans = mid; l = mid+1;} else {r = mid-1;}
    }
    cout << ans;
}
