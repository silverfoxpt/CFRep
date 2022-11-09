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
    if (n >= 0) {cout << n;}
    else
    {
        int k = n%10;
        cout << max(n/10, (n/100)*10 + k);
    }
}
