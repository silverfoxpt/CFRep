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
    int a,b; cin >> a >> b;
    int x = min(a,b);

    long long c = 1;
    for (int i = 1; i <= x; i++) {c *= i;}
    cout << c;
}
