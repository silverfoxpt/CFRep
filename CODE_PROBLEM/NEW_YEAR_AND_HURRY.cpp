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
    int n,k; cin >> n >> k;
    int l = 1, r = n; int ans = 0;
    int minRemains = 240 - k;

    if (minRemains < 5) {cout << 0; return(0);}

    while(l <= r)
    {
        int mid = l + (r-l)/2;
        int pCount = (5*mid+5) * mid / 2;

        //cout << mid << " " << pCount << '\n';

        if (pCount <= minRemains)
        {
            ans = mid; l = mid+1;
        }
        else {r = mid-1;}
    }
    cout << ans;
}
