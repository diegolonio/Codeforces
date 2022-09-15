// 171679744 | Sep/11/2022 01:43 UTC-5 | diegolonio | 233A - Perfect Permutation | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, i;

    cin >> n;

    if (n % 2 != 0)
        cout << -1;
    else
        for (i = 0; i < n / 2; i++)
            cout << 2 * i + 2 << " " << 2 * i + 1 << " ";

  return 0;
}
