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
    int n; cin >> n; int res = 0;
    res += n/100; n -= n/100*100;
    res += n/20; n -= n/20*20;
    res += n/10; n -= n/10*10;
    res += n/5; n -= n/5*5;
    res += n/1; n -= n/1*1;

    cout << res;
}
