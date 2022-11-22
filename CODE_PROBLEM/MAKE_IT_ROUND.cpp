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
    long long t; cin >> t;
    for (long long co = 0; co < t; co++)
    {
        long long n,m; cin >> n >> m; long long x = n; long long left = 0;
        long long num2 = 0, num5 = 0;
        while(n%2==0) {num2++; n/=2;}
        while(n%5==0) {num5++; n/=5;}

        long long res = 1;
        while(num2 < num5 && res*2 <= m) {num2++; res *= 2;}
        while(num5 < num2 && res*5 <= m) {num5++; res *= 5;}
        while(res*10 <= m) {res *= 10;}
        left = m/res; res *= left;

        if (res==1) {cout << x*m;} else {cout << x * res;} cout << "\n";
    }
}
