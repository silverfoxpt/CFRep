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
    int c = 0;
    while (a <= b)
    {
        c++;
        a *= 3; b *= 2;
    }
    cout << c;
}
