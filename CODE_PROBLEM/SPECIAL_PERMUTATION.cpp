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

#pragma GCC optimize("O3")

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int n; cin >> n;
        for (int i = 2; i <= n; i++) {cout << i << " ";} cout << 1 << '\n';
    }
}
