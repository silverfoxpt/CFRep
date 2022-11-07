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
    int k,n,w; cin >> k >> n >> w;

    int c = 0;
    for (int i = 1; i <= w; i++)
    {
        c += k*i;
    }
    cout << ((n >= c) ? 0 : c - n);
}
