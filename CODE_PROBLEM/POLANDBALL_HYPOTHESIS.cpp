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
    int n; cin >> n;
    if (n == 1) {cout << 7;}
    else if (n%2==1) {cout << 1;}
    else //even
    {
        int m = 1;
        while(true)
        {
            if (!isPrime(n*m+1)) {cout << m; return(0);}
            m++;
        }
    }
}
