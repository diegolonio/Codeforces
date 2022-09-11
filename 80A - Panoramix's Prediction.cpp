// 171663702 | Sep/10/2022 19:08 UTC-5 | diegolonio | 80A - Panoramix's Prediction | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    int i = n;

    while (--i)
        if (n % i == 0 and i != 1)
            return false;

    return true;
}

bool is_next_prime(int n, int m)
{
    int i;

    for (i = n + 1; i < m; i++)
        if (is_prime(i))
            return false;

    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    if (is_prime(m)) {
        cout << (is_next_prime(n, m) ? "YES" : "NO");
    } else {
        cout << "NO";
    }

    return 0;
}