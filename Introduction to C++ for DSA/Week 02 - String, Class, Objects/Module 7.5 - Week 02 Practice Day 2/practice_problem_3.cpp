#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    cin >> s2;

    stringstream ss(s1);
    string word;
    int count = 0;
    while (ss >> word)
    {
        if (word == s2)
        {
            count ++;
        }
    }

    cout << count << endl;

    return 0;
}