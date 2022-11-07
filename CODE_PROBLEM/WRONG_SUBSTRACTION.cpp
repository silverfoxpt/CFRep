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
    int n,k; cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0) {n /= 10;} else {n--;}
    }
    cout << n;
}
