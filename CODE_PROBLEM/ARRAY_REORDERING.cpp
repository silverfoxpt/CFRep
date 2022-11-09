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

int gcd(int a, int b)
{
    if (a==0) {return b;} if (b==0) {return a;}
    return gcd(b,a%b);
}

int main()
{
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int n; cin >> n; int a[n]; vector<int> p;
        for (int i = 0; i < n; i++) {cin >> a[i];
            if (a[i]%2==0) {p.push_back(a[i]);}
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2==1) {p.push_back(a[i]);}
        }

        int c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (gcd(p[i], 2*p[j]) > 1) {c++;}
            }
        }
        cout << c << '\n';
    }
}
