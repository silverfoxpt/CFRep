#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n; int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < 3; j++)
        {
            int x; cin >> x; c += x;
        }
        if (c >= 2) {res++;}
    }
    cout << res;
}
