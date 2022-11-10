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
    int a[n]; for (int i = 0; i < n; i++) {cin >> a[i];}

    int mini = 1e9; int miniPos = -1; int curSum = 0;
    for (int i = 0; i < k; i++) {curSum += a[i];}
    if (curSum < mini) {mini = curSum; miniPos = 0;}

    for (int i = k; i < n; i++)
    {
        curSum -= a[i-k]; curSum += a[i];
        if (curSum < mini) {mini = curSum; miniPos = i-k+1; }
    }
    cout << miniPos+1;
}
