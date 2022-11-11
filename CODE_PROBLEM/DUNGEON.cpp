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
        int a,b,c;
        int x[3]; cin >> x[0] >> x[1] >> x[2]; sort(x, x+3);
        a = x[0]; b = x[1]; c = x[2];

        int k = (a+b+c)/9;
        if ((a+b+c)%9 == 0 && a >= k) {cout << "YES";} else {cout << "NO";} cout << '\n';
    }
}
