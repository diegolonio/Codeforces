// 173109007 | Sep/22/2022 | 14:38 UTC-5 | diegolonio | 58A - Chat room | GNU C++14 | Accepted | 15 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string g = "hello", s;
    int i, j = 0;

    cin >> s;

    for (i = 0; i < s.size(); i++)
        if (s[i] == g[j])
            j++;

    cout << (j == 5 ? "YES" : "NO");

    return 0;
}
