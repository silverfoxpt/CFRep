#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
#include <set>
#include <cstdio>
#include <iomanip>
#include <cctype>
#include <utility>
#include <cmath>
#include <climits>
#include <windows.h>
using namespace std;

struct carInfo
{
    int price, cap;
};

bool Compare(const carInfo &a, const carInfo &b)
{
    return a.cap < b.cap;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,t,s; cin >> n >> k >> s >> t;
    carInfo a[n+1];
    for (int i = 1; i <= n; i++)
    {
        carInfo newCar; int x,y; cin >> x >> y; newCar.price = x; newCar.cap = y;
        a[i] = newCar;
    }
    carInfo nonCar; nonCar.price = 0; nonCar.cap = 1e9; nonCar.cap = nonCar.cap * 2+1;
    a[0] = nonCar;
    sort(a, a+n+1, Compare);

    int lengths[k+1];
    int gas[k]; for (int i = 0; i < k; i++) {cin >> gas[i];} sort(gas, gas+k);

    int cur = 0;
    for (int i = 0; i < k; i++) {lengths[i] = gas[i] - cur; cur = gas[i];}
    lengths[k] = s - cur; //last stretch

    //check
    int l = 0, r = n; int ans = -1;
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        int capacity = a[mid].cap;

        //check if this capacity is ok
        int time = 0;
        for (int i = 0; i <= k; i++)
        {
            int len = lengths[i];
            if (capacity < len) {time = 1e9; time *= 2; time++; break; } //capacity too small

            int accelerated = min(len, capacity - len); int normal = len - accelerated;
            time += accelerated + normal*2;
        }

        if (time <= t) {ans = mid; r = mid-1;} //try smaller capacity car
        else {l = mid+1;}
    }
    if (ans == n || ans == -1) {cout << -1; return(0);}

    int minPrice = 1e9;
    for (int i = ans; i < n; i++)
    {
        minPrice = min(minPrice, a[i].price);
    }
    cout << minPrice;
}
