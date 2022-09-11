// 171662009 | Sep/10/2022 18:07 UTC-5 | diegolonio | 266A - Stones on the Table | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, taken = 0;
    string stones;

    cin >> t >> stones;

    while (--t)
        if (stones[t] == stones[t-1])
            taken++;

    cout << taken;

    return 0;
}
