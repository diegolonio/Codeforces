// 173620326 | Sep/26/2022 14:05 UTC-5 | diegolonio | 112A - Petya and Strings | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string a, b;
    int i;

    cin >> a >> b;

    for (i = 0; i < a.size(); i++) {
        if (tolower(a[i]) > tolower(b[i])) {
            cout << 1;
            return 0;
        }

        if (tolower(a[i]) < tolower(b[i])) {
            cout << -1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
