#include <iostream>
using namespace std;

int main()
{
    int n,k; cin >> n >> k; int c = 0; int tmp = 0;
    for (int i = 1; i<= n; i++)
    {
        int x; cin >> x; if (x <= 0) {continue;}
        if (i < k) {c++;}
        else if (i == k) {c++; tmp = x;}
        else if (i > k && x == tmp) {c++;}
    }
    cout << c;
}
