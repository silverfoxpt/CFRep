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

int main()
{
    string recipe; cin >> recipe;
    long long xa = 0, xb = 0, xc = 0;

    for (long long i = 0; i < recipe.length(); i++)
    {
        if (recipe[i] == 'B') {xa++;}
        else if (recipe[i] == 'S') {xb++;}
        else {xc++;}
    }

    long long na,nb,nc; cin >> na >> nb >> nc;
    long long pa,pb,pc; cin >> pa >> pb >> pc;
    long long money; cin >> money;

    long long l = 0, r = 1e15; long long ans = 0;
    while(l <= r)
    {
        long long burger = l + (r - l)/2;
        long long neededA = max(xa*burger - na, (long long) 0); long long moneyA = pa * neededA;
        long long neededB = max(xb*burger - nb, (long long) 0); long long moneyB = pb * neededB;
        long long neededC = max(xc*burger - nc, (long long) 0); long long moneyC = pc * neededC;

        //cout << moneyA + moneyB + moneyC << '\n';

        if (money - moneyC - moneyB - moneyA >= 0)
        {
            ans = burger; l = burger+1;
        } else {r = burger-1;}
    }
    cout << ans;
}
