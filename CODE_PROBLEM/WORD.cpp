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
    string s; cin >> s;
    int u = 0, l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != tolower(s[i])) {u++;} else {l++;}
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (u > l) {s[i] = toupper(s[i]);} else {s[i] = tolower(s[i]);}
    }
    cout << s;
}
