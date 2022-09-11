// 170690563 | Sep/02/2022 23:28 UTC-5 | diegolonio | 110A - Nearly Lucky Number | GNU C++14 | Accepted | 0 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int c) { return c == '4' or c == '7'; }

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string n;
    int occur;

    cin >> n;

    occur = count_if(n.begin(), n.end(), is_lucky);

    cout << ((occur == 4 or occur == 7) ? "YES" : "NO");

    return 0;
}
