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
    int n; cin >> n;
    int a[n]; for (int i = 0; i < n; i++) {cin >> a[i];} sort(a, a+n);
    int q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m; cin >> m;
        if (m < a[0]) {cout << 0 << "\n"; continue;}
        int l = 0, r = n-1; int ans = -1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if (a[mid] <= m) {ans = mid; l = mid+1;} else {r = mid-1;}
        }
        cout << ans+1 << "\n";
    }
}
