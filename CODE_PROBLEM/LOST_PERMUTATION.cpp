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
        int m, sum; cin >> m >> sum;
        vector<int> a; int maxi = -1, curSum = 0; for (int i = 0; i < m; i++) {int x; cin >> x; maxi = max(maxi, x); curSum += x;}

        bool yeah = false;
        int theoSum = maxi * (maxi+1)/2;
        int leftInOld = theoSum - curSum;

        for (int i = 1; i <= 1000; i++)
        {
            int newSum = i * (i+1) / 2;
            if (newSum - theoSum + leftInOld == sum)
            {
                if (i < maxi) {break;} else {yeah = true; break;}
            }
        }
        if (yeah) {cout << "YES";} else {cout << "NO";} cout << '\n';

    }
}
