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
    for (int i = 0; i < t; i++)
    {
        int n,a,b; cin >> n >> a >> b;
        if (a == b && b == n) {cout << "YES";}
        else if (a+b < n-1) {cout << "YES";}
        else {cout << "NO";}
        cout << '\n';
    }
}
