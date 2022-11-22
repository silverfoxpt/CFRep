#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>
#include <set>
#include <cstdio>
#include <iomanip>
#include <cctype>
#include <utility>
#include <cmath>
#include <climits>
#include <windows.h>
using namespace std;

int c;
int a[9];

vector<string> ans;
int lock1[4] = {0, 1, 3, 4};
int lock2[4] = {1, 2, 4, 5};
int lock3[4] = {6, 7, 3, 4};
int lock4[4] = {4, 5, 7, 8};

void incClock(int& x)
{
    if (x == c-1) {x = 0;} else {x++;}
}

void spin(vector<int> locks, int target, int oriIdx)
{
    set<int> clock; //assume all clock has same value now
    for (int i = 0; i < (int) locks.size(); i++)
    {
        if (locks[i] == 1) { for (int j = 0; j < 4; j++) {clock.insert(lock1[j]); }}
        else if (locks[i] == 2) { for (int j = 0; j < 4; j++) {clock.insert(lock2[j]); }}
        else if (locks[i] == 3) { for (int j = 0; j < 4; j++) {clock.insert(lock3[j]); }}
        else if (locks[i] == 4) { for (int j = 0; j < 4; j++) {clock.insert(lock4[j]); }}
    }

    int spinTime = 0; vector<int> clockToSpin; for (set<int>::iterator it = clock.begin(); it!=clock.end(); it++) {clockToSpin.push_back(*it);}
    while(a[oriIdx] != target)
    {
        spinTime++;
        for (int i = 0; i < (int) clockToSpin.size(); i++) { int x = clockToSpin[i]; incClock(a[x]);}
    }

    //create ans
    if (spinTime == 0) {return;} //no need to spin

    string res = "";
    for (int i = 1; i <= 4; i++)
    {
        vector<int>::iterator it = find(locks.begin(), locks.end(), i);
        if (it != locks.end()) {res += '1';} else {res +='0';} res += ' ';
    }
    for (int i = 0; i < (int) clockToSpin.size(); i++)
    {
        if (clockToSpin[i] == 0 || clockToSpin[i] == 2 || clockToSpin[i] == 6 || clockToSpin[i] == 8)
        {
            res += to_string(clockToSpin[i]+1); res += ' '; break;
        }
    }
    res += to_string(spinTime);
    ans.push_back(res);
}

void singleSpin(int clockIdx, int target)
{
    int spinTime = 0;
    while (a[clockIdx] != target) {incClock(a[clockIdx]); spinTime++;}

    //create ans
    if (spinTime == 0) {return;} //no need to spin

    string res = "";
    for (int i = 1; i <= 4; i++) {res += "0 ";} res += to_string(clockIdx+1); res += ' '; res += to_string(spinTime);
    ans.push_back(res);
}

int main()
{
    cin >> c;
    for (int i = 0; i < 9; i++) {cin >> a[i];}

    //spin!
    vector<int> lock = {4};         spin(lock, a[3], 4); //sync mid to left
    lock = {3};                     spin(lock, a[1], 4); //sync mid left to top
    lock = {1, 3};                  spin(lock, a[5], 4); //sync mid left top to right
    lock = {1, 2};                  spin(lock, a[7], 4); //sync mid left top right to down

    //sync 4 corner clock
    singleSpin(0, a[1]); singleSpin(2, a[1]); singleSpin(6, a[1]); singleSpin(8, a[1]);

    //final spin
    lock = {1, 2, 3, 4}; spin(lock, 0, 0);

    //print res
    cout << "YES\n"; cout << ans.size() << '\n';
    for (int i = 0; i < (int) ans.size(); i++) {cout << ans[i] << '\n';}
}
