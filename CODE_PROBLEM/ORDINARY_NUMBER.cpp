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
    for (int c = 0; c < t; c++)
    {
        int n; cin >> n;
        int co = 0;

        for (int i = 1; i <= 9; i++)
        {
            string s = "";
            for (int num = 1; num <= 9; num++)
            {
                for (int j = 0; j < i; j++) {s += to_string(num);}
                if (stoi(s) <= n) {co++;}
                s = "";
            }
        }
        cout << co << '\n';
    }
}
