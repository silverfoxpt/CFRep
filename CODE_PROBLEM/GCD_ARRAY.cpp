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
        int l,r,k; cin >> l >> r >> k;
        if (r-l == 0)
        {
            if (l == 1) {cout << "NO";} else {cout << "YES";}
        }
        else if (r-l==1)
        {
            if (k > 0) {cout << "YES";} else {cout << "NO";}
        }
        else
        {
            int s,e;
            s = (l%2==0) ? l+1 : l; e = (r%2==0) ? r-1 : r;
            int odd = (e-s)/2+1;
            if (k >= odd) {cout << "YES";} else {cout << "NO";}
        }
        cout << "\n";
    }
}
