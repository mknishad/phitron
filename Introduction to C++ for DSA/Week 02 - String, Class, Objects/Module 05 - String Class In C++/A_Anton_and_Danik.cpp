#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;
    for (string::iterator it = s.begin(); it != s.end(); it++)
    {
        if (*it == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    
    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (anton < danik)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}