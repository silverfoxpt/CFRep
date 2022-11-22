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
        int l,r,x,a,b; cin >> l >> r >> x >> a >> b;
        if (a==b) {cout << 0 << '\n';}
        else if (abs(a-b) >= x) {cout << 1 << '\n';}
        else
        {
            if (abs(a-l) >= x && abs(l-b) >= x) {cout << 2 << '\n';}
            else if (abs(a-r) >= x && abs(r-b) >= x) {cout << 2 << '\n';}
            else if (abs(a-r) >= x && abs(r-l) >= x && abs(l-b) >= x) {cout << 3 << '\n';}
            else if (abs(a-l) >= x && abs(l-r) >= x && abs(r-b) >= x) {cout << 3 << '\n';}
            else {cout << -1 << '\n';}
        }
    }
}
