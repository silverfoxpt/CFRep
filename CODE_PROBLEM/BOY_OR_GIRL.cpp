#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s; cin >> s;
    set<char> c;

    for (int i = 0; i < s.length(); i++)
    {
        c.insert(s[i]);
    }
    if (c.size() % 2 == 0) {cout << "CHAT WITH HER!";} else {cout << "IGNORE HIM!";}
}
