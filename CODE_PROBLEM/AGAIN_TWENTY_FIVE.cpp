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

int pow_mod(int x, unsigned long long n, int m)
{
    if (n == 0) {return 1;}
    if (n == 1) {return x;}

    int t = pow_mod(x, n/2, m);
    if (n%2==0) {return (t*t) % m;}
    else {return ((t*t)%m)*x%m;}
}

int main()
{
    unsigned long long n; cin >> n;
    cout << pow_mod(5, n, 100);
}
