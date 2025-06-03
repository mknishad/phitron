#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            c -= 32;
        }

        freq[c - 'A']++;
    }

    int min_freq = INT_MAX;
    min_freq = min(min_freq, freq['E' - 'A']);
    min_freq = min(min_freq, freq['G' - 'A']);
    min_freq = min(min_freq, freq['Y' - 'A']);
    min_freq = min(min_freq, freq['P' - 'A']);
    min_freq = min(min_freq, freq['T' - 'A']);

    cout << min_freq;

    return 0;
}