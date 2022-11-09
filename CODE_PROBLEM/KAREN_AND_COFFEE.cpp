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

const long long MAX_N = 200000;

int main()
{
    long long n,k; cin >> n >> k; long long q; cin >> q;
    long long a[MAX_N+1]; a[0] = 0;
    long long b[MAX_N+2]; for (long long i = 0; i <= MAX_N+1; i++) {b[i] = 0;} //difference array
    long long c[MAX_N+1], d[MAX_N+1]; c[0] = d[0] = 0;

    for (long long i = 0 ; i < n; i++)
    {
        long long l,r; cin >> l >> r;
        b[l]++; b[r+1]--;
    }

    //reconstruct
    for (long long i = 1; i <= MAX_N; i++)
    {
        a[i] = a[i-1] + b[i];
        if (a[i] >= k) {c[i] = 1;} else {c[i] = 0;}
        d[i] = d[i-1] + c[i];
    }

    //queries
    for (long long i = 0; i < q; i++)
    {
        long long a,b; cin >> a >> b;
        cout << d[b] - d[a-1] << "\n";
    }
}
