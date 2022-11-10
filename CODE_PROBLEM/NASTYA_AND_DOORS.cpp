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
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int n,k; cin >> n >> k;
        int a[n+1]; for (int i = 1; i <= n; i++) {cin >> a[i];}
        int c[n+1]; c[0] = c[1] = c[n] = 0; for (int i = 2; i <= n-1; i++) {
            if (a[i] > a[i-1] && a[i] > a[i+1]) {c[i] = 1;} else {c[i] = 0;}
        }
        //int d[n+1]; d[0] = 0; for (int i = 1; i <= n; i++) {d[i] = d[i-1] + c[i];} //prefix sum

        int iniSum = 0; int maxi = -1; int maxiPos = -1;
        for (int i = 1; i <= k; i++) {iniSum += c[i];}
        if (iniSum - c[1] - c[k] > maxi) {maxi = iniSum - c[1] - c[k]; maxiPos = 1;}

        for (int i = k+1; i <= n; i++)
        {
            iniSum = iniSum + c[i] - c[i-k];
            if (iniSum - c[i] - c[i-k+1] > maxi) {maxi = iniSum - c[i] - c[i-k+1]; maxiPos = i-k+1; }
        }
        cout << maxi+1 <<  " " << maxiPos << "\n";
    }
}
