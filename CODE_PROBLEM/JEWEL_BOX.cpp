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
int a[3][3];

vector<string> ans;
int lock1[4] = {0, 1, 3, 4};
int lock2[4] = {1, 2, 4, 5};
int lock3[4] = {6, 7, 3, 4};
int lock4[4] = {4, 5, 7, 8};

void spin(vector<int> locks, int clockIdxX, int clockIdxY, int clockTargetIdxX, int clockTargetIdxY)
{
    set<int> lockToSpin;
    for (int i = 0; i < locks.size(); i++)
    {
        if (locks[i] == 1) { for (int j = 0; j < 4; j++) {lockToSpin.insert(lock1[j]); }}
        else if (locks[i] == 2) { for (int j = 0; j < 4; j++) {lockToSpin.insert(lock2[j]); }}
        else if (locks[i] == 3) { for (int j = 0; j < 4; j++) {lockToSpin.insert(lock3[j]); }}
        else if (locks[i] == 4) { for (int j = 0; j < 4; j++) {lockToSpin.insert(lock4[j]); }}
    }

    int spinTime = 0;
    //while()
}

int main()
{
    cin >> c;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {cin >> a[i][j];}
    }
}
