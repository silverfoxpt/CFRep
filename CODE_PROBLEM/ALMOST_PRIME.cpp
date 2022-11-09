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

bool isPrime(int x)
{
    if (x<=1) {return false;}
    for (int i = 2; i*i <= x; i++)
    {
        if (x%i==0) {return false;}
    }
    return true;
}

int main()
{
    int x; cin >> x; int co = 0;
    for (int n2 = 1; n2 <= x; n2++)
    {
        int n = n2;

        int c = 2; int numPrime = 0;
        while(c <= n)
        {
            if (!isPrime(c)) {c++; continue;}
            if (n%c==0)
            {
                numPrime++;
                while(n%c==0) {n/=c;}
            }
            c++;
        }
        if (numPrime == 2) {co++;}
    }
    cout << co;
}
