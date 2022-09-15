// 171698175 | Sep/11/2022 05:22 UTC-5 | diegolonio | B - Non-square Equation | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int s(int x)
{
    int sum = 0;

    while (x) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main(void)
{
    long long int n, sx, x, x2;

    cin >> n;

    for (sx = 1; sx <= 81; sx++) {
        x = (-sx + sqrt(sx * sx + 4 * n)) / 2;

        if ((x * x + sx * x - n) == 0 and sx == s(x)) {
            cout << x;
            return 0;
        }
    }

    cout << -1;

    return 0;
}
