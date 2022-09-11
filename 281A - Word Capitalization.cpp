// 170689572 | Sep/02/2022 23:10 UTC-5 | diegolonio | 281A - Word Capitalization | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string word;

    cin >> word;

    cout << (char)toupper(word[0]) << word.substr(1);

    return 0;
}
