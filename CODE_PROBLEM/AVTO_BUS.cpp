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
    long long t; cin >> t;
    for (long long co = 0; co < t; co++)
    {
        long long n; cin >> n;
        if (n <= 2 || n%2==1) {cout << -1 << '\n'; continue;}

        //find max
        long long maxi;
        if (n%4==0) {maxi = n/4;}
        else {maxi = (n-6)/4 + 1;}

        //find min
        long long mini;
        if (n%6==0) {mini = n/6;}
        else if (n%6==4) {mini = (n-4)/6 + 1;} //1 extra 4 wheel
        else if (n%6==2) {mini = (n-8)/6 + 2;} //2 extra 4 wheel
        cout << mini << " " << maxi << '\n';
    }
}
