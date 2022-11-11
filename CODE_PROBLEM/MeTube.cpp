#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
const int maxN = 32;
const int masMask = 1 << 18;
vector<char> categories;
int n, d[maxN], s[maxN];
int f1[maxMask], f2[maxMask];
int cmask1[maxMask], cmask2[maxMask];

void atmp(int& f[], int& cmask[], int m, int linear) {
    for (int mask = 0; mask < (1 << m); ++mask) {
        for (int i = 0; i < m; ++i) {
            if (mask & (1 << i)) {
                f[mask] += d[i + linear];
                cmask[mask] |= s[i + linear];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cie.tie(nullptr);
    string tmp; cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> d[i] >> tmp;
        for (const char& c : tmp) {
            categories.push_back(c);
            s += (1 << (c - 'a'));
        }
    }
    sort(categories.begin(), categories.end());
    categories.erase(unique(categories.begin(), categories.end()), categories.end());
    for (int i = 0; i < categories.size(); ++i) {
        int rpl = 0;
        for (const char& c : categories) {
            if (s[i] & (1 << (c - 'a'))) {
                rpl += (1 << i);
            }
        }
        s[i] = rpl;
    }
    int m = categories.size() / 2;
    atmp(f1, cmask1, m, -1); atmp(f2, cmask2, n - m, m - 1);

}
