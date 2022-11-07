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
    long long n; cin >> n;
    int c = 0;
    while (n > 0)
    {
        if (n%10 == 4 || n%10 == 7) {c++;}
        n /= 10;
    }
    if (c == 0) {cout << "NO"; return(0);}

    while(c > 0)
    {
        if (c%10 != 4 && c%10 != 7) {cout << "NO"; return(0);}
        c /= 10;
    }
    cout << "YES";
}
