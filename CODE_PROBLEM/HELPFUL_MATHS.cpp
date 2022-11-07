#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s; int a = 0, b = 0, c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1') {a++;}
        if (s[i] == '2') {b++;}
        if (s[i] == '3') {c++;}
    }

    string res = "";
    for (int i = 0; i < a; i++) {res += "1+";}
    for (int i = 0; i < b; i++) {res += "2+";}
    for (int i = 0; i < c; i++) {res += "3+";}

    res.pop_back(); cout << res;
}
