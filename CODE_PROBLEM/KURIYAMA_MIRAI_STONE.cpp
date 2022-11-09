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
    int n; cin >> n;
    int a[n+1]; a[0] = 0; for (int i = 1; i <= n; i++) {cin >> a[i];}
    int b[n+1]; b[0] = 0; for (int i = 1; i <= n; i++) {b[i] = b[i-1] + a[i];}

    sort(a, a+n+1);
    int c[n+1]; c[0] = 0; for (int i = 1; i <= n; i++) {c[i] = c[i-1] + a[i];}


}
