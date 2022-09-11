// 170554278 | Sep/02/2022 02:28 UTC-5 | diegolonio | 271A - Beautiful Year | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int year, a, b, c, d;

    cin >> year;

    while (true) {
        year++;

        a = year / 1000;
        b = year / 100 - year / 1000 * 10;
        c = year / 10 - year / 100 * 10;
        d = year - year / 10 * 10;

        if (a != b and a != c and a != d and b != c and b != d and c != d) {
            cout << a << b << c << d;
            break;
        }
    }

    return 0;
}