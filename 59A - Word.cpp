// 170576280 | Sep/02/2022 06:49 UTC-5 | diegolonio | 59A - Word | GNU C++14 | Accepted | 30 ms | 0 KB
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string word;
    int uppers, lowers, length, i;

    cin >> word;

    length = word.size();
    uppers = count_if(word.begin(), word.end(), static_cast<int(*)(int)>(isupper));
    lowers = length - uppers;

    for (i = 0; i < length; i++)
        if (uppers <= lowers)
            if (isupper(word[i]))
                cout << (char)tolower(word[i]);
            else
                cout << word[i];
        else
            cout << (char)toupper(word[i]);

    return 0;
}