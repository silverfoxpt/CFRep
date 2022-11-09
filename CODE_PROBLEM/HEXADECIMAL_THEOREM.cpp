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

const int MAX_N = 1e9;

int main()
{
    int n; cin >> n;
    vector<int> fi; fi.push_back(0); fi.push_back(1);

    int c = 1;
    while(fi[c-1] + fi[c] <= MAX_N)
    {
        fi.push_back(fi[c-1] + fi[c]); c++; //cout << fi[c] << '\n';
    }

    int p = fi.size();
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < p; k++)
            {
                if (fi[i]+fi[j]+fi[k] == n) {cout << fi[i] << " " << fi[j] << " " << fi[k] << '\n'; return(0);}
            }
        }
    }
    cout << "I'm too stupid to solve this problem";
}
