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

int main()
{
    long long n; cin >> n;
    long long a[n+1]; a[0] = 0; for (long long i = 1; i <= n; i++) {cin >> a[i];}
    long long b[n+1]; b[0] = 0; for (long long i = 1; i <= n; i++) {b[i] = b[i-1] + a[i];}

    sort(a, a+n+1);
    long long c[n+1]; c[0] = 0; for (long long i = 1; i <= n; i++) {c[i] = c[i-1] + a[i];}

    long long q; cin >> q;
    for (long long i = 0; i < q; i++)
    {
        long long l,r,type; cin >> type >> l >> r;
        if (type==1) { cout << b[r] - b[l-1];} else {cout << c[r] - c[l-1];}
        cout << "\n";
    }
}
