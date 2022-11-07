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
    int n; cin >> n;
    if (n%2==0)
    {
        cout << n/2 << '\n';
        for (int i = 0; i < n/2; i++) {cout << 2 << " ";}
    }
    else
    {
        cout << (n-3)/2 + 1 << '\n';
        for (int i = 0; i < (n-3)/2; i++) {cout << 2 << " ";} cout << 3;
    }
}
