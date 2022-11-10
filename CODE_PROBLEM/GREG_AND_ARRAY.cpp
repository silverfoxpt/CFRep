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

struct operation
{
    long long l,r,d;
};

int main()
{
    long long n,m,k; cin >> n >> m >> k;
    long long a[n+1]; a[0] = 0; for (long long i = 1; i <= n; i++) {cin >> a[i];}
    long long b[n+1]; b[0] = 0; for (long long i = 1; i <= n; i++) {b[i] = a[i] - a[i-1];}

    operation ops[m+1];
    long long c[m+1]; long long cr[m+1]; for (long long i = 0; i <= m; i++) {c[i] = 0; cr[i] = 0;}

    for (long long i = 1; i <= m; i++)
    {
        long long l,r,d; cin >> l >> r >> d;
        operation newOp; newOp.l = l; newOp.r = r; newOp.d = d;
        ops[i] = newOp;
    }

    for (long long i = 0; i < k; i++)
    {
        long long x,y; cin >> x >> y;
        c[x] += 1;
        if (y < m) {c[y+1] -= 1;}
    }

    //reconstruct
    for (long long i = 1; i<=m; i++)
    {
        cr[i] = cr[i-1] + c[i];

        //use to increase b
        long long l = ops[i].l, r = ops[i].r, d = ops[i].d; d *= cr[i]; //operation used cr[i] times
        b[l] += d;
        if (r < n) {b[r+1] -= d;}
    }

    //reconstruct
    for (long long i = 1; i <= n; i++) {a[i] = a[i-1] + b[i]; cout << a[i] << " ";}
}
