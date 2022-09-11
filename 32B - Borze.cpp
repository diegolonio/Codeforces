// 170548385 | Sep/02/2022 01:13 UTC-5 | diegolonio | 32B - Borze | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string number {};
    int length, i = 0;

    cin >> number;
    length = number.size();

    while (i < length) {
        if (number[i] == '.') {
            cout << "0";
        } else if (number[i+1] == '.') {
            cout << "1";
            i++;
        } else {
            cout << "2";
            i++;
        }

        i++;
    }

    return 0;
}
