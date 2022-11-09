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
        unsigned long long a,b; cin >> a >> b; if (a==b) {cout << "0 0\n"; continue;}
        unsigned long long k1 = min(a,b);

        unsigned long long x = max(a,b) - k1; unsigned long long k2 = min(a%x, x-(a%x));

        cout << x << " " << min(k1, k2) << '\n';
    }
}
