#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    map<string, int> mp;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}