#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["rahim"] = 1;        // O(logN)
    mp["karim"] = 2;
    mp["tamim"] = 3;
    mp.insert(make_pair("s", 1));

    for (auto it = mp.begin(); it != mp.end(); it++)        // O(NlogN)
    {
        cout << it->first << " " << it->second << endl;     // O(logN)
    }

    
    if (mp.count("shamim"))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}