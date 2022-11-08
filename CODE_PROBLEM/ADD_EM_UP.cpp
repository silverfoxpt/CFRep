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

const int MAX_N = 100001;
int n,s;
int ax[MAX_N], ar[MAX_N];

int updown(int x)
{
    int c = 1; int sum = 0;
    while(x > 0)
    {
        int k = x%10; x/=10;
        switch(k)
        {
            case 0: sum += 0*c; break;
            case 1: sum += 1*c; break;
            case 2: sum += 2*c; break;
            case 3: return -1; break;
            case 4: return -1; break;
            case 5: sum += 5*c; break;
            case 6: sum += 9*c; break;
            case 7: return -1; break;
            case 8: sum += 8*c; break;
            case 9: sum += 6*c; break;
        }
        c*=10;
    }
    string y = to_string(sum); reverse(y.begin(), y.end());

    return stoi(y);
}

int main()
{
    cin >> n >> s;
    fill(ax, ax+MAX_N, 0);
    fill(ar, ar+MAX_N, 0);

    for (int i = 0; i < n; i++)
    {
        int k; cin >> k; ax[k] += 1;
        int r = updown(k); if (r != -1) {ar[r] += 1;} cout << r << '\n';
    }

    for (int i = 0; i < MAX_N; i++)
    {
        if (ax[i] >= 1)
        {
            if (s-i == i)
            {
                if (ax[i] >= 2 || ar[i] >= 1) {cout << "YES"; return(0);}
            }
            else
            {
                int k = updown(i);
                if (ax[s-i] >= 1 || (k != s-i && ar[s-i] >= 1) || (k == s-i && ar[s-i] >= 2)) {cout << "YES"; return(0);}
            }
        }
        if (ar[i] >= 1) //ax[i] is out
        {
            if (s-i == i)
            {
                if (ar[i] >= 2) {cout << "YES"; return(0);}
            }
            else
            {
                int k = updown(i);
                if (ar[s-i] >= 1 || (k != s-i && ax[s-i] >= 1) || (k == s-i && ax[s-i] >= 2)) {cout << "YES4"; return(0);}
            }
        }
    }
    cout << "NO";
}
