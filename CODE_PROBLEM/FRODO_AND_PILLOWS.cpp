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
    long long n,m,k; cin >> n >> m >> k;

    long long l = 1, r = m; long long ans = 1;
    while(l <= r)
    {
        long long mid = l + (r-l)/2; //frodo gets 'mid' pillows
        long long needed = mid;
        if (k > 1) //hobbits on the left
        {
            long long start = mid-1, endi = max((long long) 1, mid - (k-1)), inRange = (start - endi + 1), outRange = k-1 - inRange;
            needed += (start + endi) * inRange / 2 + outRange;
        }
        if (k < n) //hobbits on the right
        {
            long long start = mid-1, endi = max((long long) 1, mid - (n-k)), inRange = (start - endi + 1), outRange = n-k - inRange;
            needed += (start + endi) * inRange / 2 + outRange;
        }
        if (needed <= m) {ans = mid; l = mid+1; } else {r = mid-1;}
    }
    cout << ans;
}
