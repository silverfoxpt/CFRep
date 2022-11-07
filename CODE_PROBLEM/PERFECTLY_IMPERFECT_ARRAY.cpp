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
        int n; cin >> n;
        int a[n]; bool able = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; bool notSquare = true;
            for (int j = 1; j*j <= a[i]; j++)
            {
                if (j*j == a[i]) {notSquare = false; break;}
            }
            if (notSquare) {able = true;}
        }
        if (able) {cout << "YES";} else {cout << "NO";} cout << '\n';
    }
}
