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
        long long a1, a2, a3; cin >> a1 >> a2 >> a3;
        long long k = 2*a2 - a1 - a3;
        if (k%3==0) {cout << 0;} else {cout << 1;} cout << '\n';
    }
}
