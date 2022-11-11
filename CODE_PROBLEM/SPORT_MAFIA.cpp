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
    long long n,k; cin >> n >> k;

    long long l = 0, r = n;
    while(l <= r)
    {
        long long mid = l + (r-l)/2; //cout << mid << '\n';
        long long moveAdd = n - mid; long long candiesAdded = (moveAdd) * (moveAdd+1) / 2, candiesEaten = mid;

        if (candiesAdded - candiesEaten == k) {cout << mid; return(0);}
        else if (candiesAdded - candiesEaten > k) {l = mid+1;} else {r = mid-1;}
    }
    //cout << l << '\n';
}
