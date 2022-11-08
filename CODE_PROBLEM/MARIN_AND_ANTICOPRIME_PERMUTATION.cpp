#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
#include <set>
#include <cstdio>
#include <iomanip>
#include <cctype>
#include <utility>
#include <cmath>
#include <climits>
#include <windows.h>
using namespace std;

long long fact(long long x)
{
    long long c = 1;
    for (long long i = 1; i <= x; i++)
    {
        c *= i; c %= 998244353;
    }
    return c;
}

int main()
{
    long long t; cin >> t;
    for (long long co = 0; co < t; co++)
    {
        long long n; cin >> n;
        if (n%2==1) { cout << 0 << '\n';}
        else
        {
            long long k = fact(n/2); cout << k*k%998244353 << '\n';
        }
    }
}
