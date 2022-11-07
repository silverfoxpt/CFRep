#include <iostream>
using namespace std;

int main()
{
    int m,n; cin >> m >> n;
    int c = 0; c += (m/2*2) * (n/2*2) / 2;
    if (m % 2 == 1) { c += (n/2*2) / 2;}
    if (n % 2 == 1) { c += (m/2*2) / 2;}
    cout << c;
}
