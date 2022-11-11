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
    long long n,m; cin >> n >> m;
    long long a[n], b[n]; for (long long i = 0; i < n; i++) {cin >> a[i];
        if (i == 0) {b[i] = a[i];} else {b[i] = b[i-1] + a[i];}
    }

    for (long long i = 0; i < m; i++)
    {
        long long k; cin >> k;
        if (k <= a[0]) {cout << 1 << " " << k << '\n'; continue;}

        //find total < k
        long long l = 0, r = n-1; long long ans = 0;
        while(l <= r)
        {
            long long mid = l + (r-l)/2;
            if (b[mid] < k)
            {
                ans = mid; l = mid+1;
            } else {r = mid-1;}
        }

        ans++; //next dorm is right dorm
        k -= b[ans-1];

        cout << ans+1 << " " << k << '\n';
    }
}
