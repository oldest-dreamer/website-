#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define int long long
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int o= count(s.begin(), s.end(), '1');
    if (o<= 2) {
        cout << o-1 << "\n";
        return;
    }
    int m = 0;
    while (s[m] == '0') {
        ++m;
    }
    int z = n - 1;
    while (s[z] == '0') {
        --z;
    }
    cout <<z-m<<"\n";
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
