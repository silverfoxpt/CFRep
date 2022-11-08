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

bool isPrime(int x)
{
    for (int i = 2; i*i <= x; i++)
    {
        if (x%i==0) {return false;}
    }
    return true;
}

int main()
{
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int sum = 0;
        int n; cin >> n; int a[n]; int odd = 0;
        for (int i = 0; i < n; i++) {cin >> a[i]; sum += a[i]; odd += ((a[i]%2==1) ? 1 : 0);}

        if (!isPrime(sum))
        {
            cout << n << '\n';
            for (int i = 0; i < n; i++) {cout << i+1 << ' ';} cout << '\n';
        }
        else
        {
            bool skipped = false;
            if (odd%2==1) {cout << n-1 << '\n';} else {cout << n << '\n';}
            for (int i = 0; i < n; i++)
            {
                if (a[i]%2==0) {cout << i+1 << ' ';}
                else
                {
                    if (odd%2==1 && (!skipped)) {skipped = true;}
                    else {cout << i+1 << " ";}
                }
            }
            cout << '\n';
        }
    }
}
