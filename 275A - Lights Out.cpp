// 171595097 | Sep/10/2022 05:09 UTC-5 | diegolonio | 275A - Lights Out | GNU C++14 | Accepted | 15 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int matrix[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int times, i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> times;

            if (times % 2 != 0) {
                if (i-1 >= 0)
                    matrix[i-1][j] = !matrix[i-1][j];

                if (j-1 >= 0)
                    matrix[i][j-1] = !matrix[i][j-1];

                matrix[i][j] = !matrix[i][j];

                if (j+1 <= 2)
                    matrix[i][j+1] = !matrix[i][j+1];

                if (i+1 <= 2)
                    matrix[i+1][j] = !matrix[i+1][j];
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            cout << matrix[i][j];
        cout << "\n";
    }

    return 0;
}
