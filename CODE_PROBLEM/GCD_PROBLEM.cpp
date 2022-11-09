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
    int t; cin >> t;
    for (int co = 0; co < t; co++)
    {
        int n; cin >> n;
        if (n%2==1)
        {

            if (((n-1)/2) % 2 == 0)
            {
                cout << (n-1)/2-1 << " " << (n-1)/2+1 << " " << 1 << '\n';
            }
            else
            {
                cout << (n-1)/2-2 << " " << (n-1)/2+2 << " " << 1 << '\n';
            }
        }
        else
        {

            cout << (n-1)/2 << " " << (n-1)/2 + 1 << " " << 1 << '\n';
        }
    }
}
