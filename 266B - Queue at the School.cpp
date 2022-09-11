// 170163696 | Aug/30/2022 08:31 UTC-5 | diegolonio | 266B - Queue at the School | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, i;
    string queue = string {};

    cin >> n >> t >> queue;

    while (t--) {
        i = n - 1;

        while (i--) {
            if (queue[i] == 'B' and queue[i+1] == 'G') {
                swap(queue[i], queue[i+1]);
                if (i > 0) i--;
            }
        }
    }

    cout << queue;

    return 0;
}
