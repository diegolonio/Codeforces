// 170125589 | Aug/30/2022 01:10 UTC-5 | diegolonio | 69A - Young Physicist | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, xi, yi, zi, sx = 0, sy = 0, sz = 0;

    cin >> t;

    while (t--) {
        cin >> xi >> yi >> zi;
        sx += xi;
        sy += yi;
        sz += zi;
    }

    cout << (sx == 0 and sy == 0 and sz == 0 ? "YES\n" : "NO\n");

    return 0;
}