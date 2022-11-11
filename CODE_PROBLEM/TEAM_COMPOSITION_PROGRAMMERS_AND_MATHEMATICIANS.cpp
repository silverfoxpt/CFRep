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
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int a,b; cin >> a >> b;
        int x = max(a,b), y = min(a,b);

        int res = 0; res += min((x-y)/2, y);
        x -= res * 3; y -= res;
        res += min(x/2, y/2); cout << res << '\n';
    }
}
