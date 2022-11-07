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

int gcd(int a, int b)
{
    if (a==0) {return b;} if (b==0) {return a;}
    return gcd(b, a%b);
}

int main()
{
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int k; cin >> k;
        int l = 100 - k, gc = gcd(l,k);
        cout << l/gc + k/gc << '\n';
    }
}
