#include <bits/stdc++.h>

using namespace std;
int n;
long long a[110];
void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long g = __gcd(a[i], a[j]);
            if (g > 1) {
                cout << g << endl;
                return ;
            }
        }
    }
    for (int it = 0; it < n; it++) {
        long long x = a[it];
        for (long long i = 1; i*i*i <= x; i++) {
            if (i > 1 && x % (i * i) == 0) {
                cout << i << endl;
                return ;
            }
            if (x % i == 0) {
                long long p = x / i;
                long long t = (long long)sqrt(p) + 1E-6;
                if (t > 1 && t*t == p) {
                    cout << t << endl;
                    return ;
                }
            }
        }
    }
    assert(false);
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}