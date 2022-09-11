// 171664289 | Sep/10/2022 9:29 UTC-5 | diegolonio | 61A - Ultra-Fast Mathematician | GNU C++14 | Accepted | 15 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string num1, num2;
    int length, i = 0;

    cin >> num1 >> num2;
    length = num1.size();

    while (i < length) {
        if (num1[i] != num2[i])
            cout << "1";
        else
            cout << "0";
        i++;
    }

    return 0;
}
