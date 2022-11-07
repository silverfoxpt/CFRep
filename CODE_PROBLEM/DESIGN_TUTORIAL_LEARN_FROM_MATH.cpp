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
    for (int i = 2; i*i <= x; i++)
    {
        if (x%i == 0) {return false;}
    }
    return true;
}

int main()
{
    int n; cin >> n;
    for (int i = 4; i <= n; i++)
    {
        if (!isPrime(i) && !isPrime(n-i))
        {
            cout << i << " " << n-i << "\n"; return(0);
        }
    }
}
