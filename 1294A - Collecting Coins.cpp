// 170123391 | Aug/30/2022 00:31 UTC-5 | diegolonio | 1294A - Collecting Coins | GNU C++14 | Accepted | 15 ms | 0 KB
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b, c, n, sum;

    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> n;

        sum = n + a + b + c;
        
        if ((sum % 3) == 0 and (sum / 3) >= max(a, max(b, c))) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
