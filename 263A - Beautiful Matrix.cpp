// 170132154 | Aug/30/2022 02:41 UTC-5 | diegolonio | 263A - Beautiful Matrix | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int row[5], i = 5;

    while (i--) {
        cin >> row[0] >> row[1] >> row[2] >> row[3] >> row[4];

        if (row[0]) {
            cout << abs(3 - (5-i)) + 2 << "\n";
        } else if (row[1]) {
            cout << abs(3 - (5-i)) + 1 << "\n";
        } else if (row[2]) {
            cout << abs(3 - (5-i)) + 0 << "\n";
        } else if (row[3]) {
            cout << abs(3 - (5-i)) + 1 << "\n";
        } else if (row[4]) {
            cout << abs(3 - (5-i)) + 2 << "\n";
        }
    }

    return 0;
}
