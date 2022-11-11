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
        int n,k; cin >> n >> k;
        long long l = 1, r = 1e18; long long ans = 0;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            int a = (n-1 + mid), b = (mid*n);

            if ((a - a%k != b - b%k) || a%k==0 || b%k==0) {ans = mid; l = mid+1;}
            else {r = mid-1;}
        }
        cout << ans << '\n';
    }
}
