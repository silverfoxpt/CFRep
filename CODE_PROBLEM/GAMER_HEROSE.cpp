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
        int n,h; cin >> n >> h;
        int a[n]; for (int i = 0; i < n; i++) {cin >> a[i];}
        sort(a, a+n);

        int max1 = a[n-1], max2 = a[n-2], sum = max1+max2;
        int res = (h / sum * 2);
        if (h%sum != 0)
        {
            if (h%sum>max1) {res += 2;} else {res += 1;}
        }
        cout << res << '\n';
    }
}
