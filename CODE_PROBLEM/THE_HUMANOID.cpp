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
    long long t; cin >> t;
    for (long long co = 0; co < t; co++)
    {
        long long n; cin >> n; long long a[n]; long long h; cin >> h;
        for (long long i = 0; i < n; i++) {cin >> a[i];} sort(a, a+n);

        long long maxSum = 0;
        long long sum, used, curPow;

        //blue green green
        sum = 0; used = 0; curPow = h;
        for (long long i = 0; i < n; i++)
        {
            if (curPow > a[i])
            {
                curPow += a[i]/2; sum += 1;
            }
            else
            {
                if (used >= 3) {break;}
                if (used == 0) {curPow*=3;} else if (used == 1 || used == 2) {curPow*=2;} used++; i--;
            }
        }
        maxSum = max(sum, maxSum);

        //green blue green
        sum = 0; used = 0; curPow = h;
        for (long long i = 0; i < n; i++)
        {
            if (curPow > a[i])
            {
                curPow += a[i]/2; sum += 1;
            }
            else
            {
                if (used >= 3) {break;}
                if (used == 1) {curPow*=3;} else if (used == 0 || used == 2) {curPow*=2;} used++; i--;
            }
        }
        maxSum = max(sum, maxSum);

        //green green blue
        sum = 0; used = 0; curPow = h;
        for (long long i = 0; i < n; i++)
        {
            if (curPow > a[i])
            {
                curPow += a[i]/2; sum += 1;
            }
            else
            {
                if (used >= 3) {break;}
                if (used == 2) {curPow*=3;} else if (used == 0 || used == 1) {curPow*=2;} used++; i--;
            }
        }
        maxSum = max(sum, maxSum);

        cout << maxSum << "\n";
    }
}
