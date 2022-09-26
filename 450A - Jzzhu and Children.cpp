// 173626519 | Sep/26/2022 15:35 UTC-5 | diegolonio | 450A - Jzzhu and Children | GNU C++14 | Accepted | 15 ms | 200 KB
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int i, j, n, div = 0;
    float a, m;

    cin >> n >> m;

    for (j = 1; j <= n; j++) {
        cin >> a;

        if (ceil(a / m) >= div) {
            div = ceil(a / m);
            i = j;
        }
    }

    cout << i;

    return 0;
}
