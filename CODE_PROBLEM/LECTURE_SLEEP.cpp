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
    int a[n+1]; for (int i = 1; i <= n; i++) {cin >> a[i];}
    int res = 0;
    int t[n+1]; for (int i = 1; i <= n; i++) {cin >> t[i];
        if (t[i] == 1) {res += a[i]; t[i] = 0;} else {t[i] = a[i];}
    }

    int maxi = 0;
    int curSum = 0; for (int i = 1; i <= k; i++) {curSum += t[i];}
    if (curSum > maxi) {maxi = curSum;}

    for (int i = k+1; i <= n; i++)
    {
        curSum = curSum + t[i] - t[i-k];
        if (curSum > maxi) {maxi = curSum;}
    }
    cout << res + maxi;
}
