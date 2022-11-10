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
    long long n,q; cin >> n >> q;
    long long a[n+1]; for (long long i = 1; i <= n; i++) {cin >> a[i];}
    long long b[n+1], c[n+1]; for (long long i = 0; i <= n; i++) {b[i] = c[i] = 0;}

    for (long long i = 0; i < q; i++)
    {
        long long l,r; cin >> l >> r;
        c[l]++; if (r < n) {c[r+1]--;}
    }
    for (long long i = 1; i <= n; i++) {b[i] = b[i-1] + c[i];}
    sort(a+1, a+n+1); sort(b+1, b+n+1);
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {sum += a[i] * b[i];} cout << sum;
}
