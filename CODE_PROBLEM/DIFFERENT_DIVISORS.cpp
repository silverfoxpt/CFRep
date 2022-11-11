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

bool isPrime(int a)
{
    if (a <= 1) {return false;}
    for (int i = 2; i*i <= a; i++)
    {
        if (a%i==0) {return false;}
    }
    return true;
}

int main()
{
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        long long d; cin >> d;
        long long a = 1 + d, b = 1+2*d;
        while(!isPrime(a)) {a++; b++;}
        while(!isPrime(b)) {b++;}
        cout << a*b << '\n';
    }
}
