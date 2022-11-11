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
    long long a,b,c; cin >> a >> b >> c;
    long long l = 0, r = 1e9; long long ans = -1;
    while(l <= r)
    {
        long long mid = l + (r-l)/2;

        long long downloaded = mid * b, needed = 0; bool able = true;
        for (long long i = 1; i <= c; i++)
        {
            needed += a;
            downloaded += b;
            if (downloaded < needed) {able = false; break;}
        }
        if (able) {ans = mid; r = mid-1; } else { l = mid+1;}
    }
    cout << ans;
}
