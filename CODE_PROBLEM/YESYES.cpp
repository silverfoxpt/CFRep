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
        string s; cin >> s;
        if (s[0] == 's') {s = 'e' + s;}
        if (s[0] == 'e') {s = 'Y' + s;}

        if (s[s.length()-1] == 'Y') {s += 'e';}
        if (s[s.length()-1] == 'e') {s += 's';}

        string res = "YES";
        if (s.length()%3!=0) {cout << "NO" << '\n'; continue;}
        for (int i = 0; i < s.length(); i+=3)
        {
            if (s[i] == 'Y' && s[i+1] == 'e' && s[i+2] == 's') {continue;}
            res = "NO";break;
        }
        cout << res << '\n';
    }
}
