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
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {cin >> a[i];} bool odd = (a[0]%2==1);

        string ans = "YES";
        for (int i = 1; i < n; i++)
        {
            if (odd && a[i]%2==0) {ans = "NO"; break;}
            if (!odd && a[i]%2==1) {ans = "NO"; break;}
        }
        cout << ans << '\n';
    }
}
