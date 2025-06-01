#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    string s3 = "!";
    s1 += s2;
    cout << s1 << endl;
    s1.append(s3);
    cout << s1 << endl;
    s1.push_back(' ');
    cout << s1 << endl;
    s1 += 'a';
    cout << s1 << endl;
    s1[0] = 'G';
    cout << s1 << endl;
    s1[13] = 'b';
    cout << s1 << endl;
    s1.pop_back();
    cout << s1 << endl;
    s2 = "Universe";
    cout << s2 << endl;
    s2.assign("Globe");
    cout << s2 << endl;
    s1.erase(5, 5);
    cout << s1 << endl;
    s1.erase(5);
    cout << s1 << endl;
    s1.replace(0, 1, "H");
    cout << s1 << endl;
    s1 += " World";
    s1.replace(6, 5, "Bangladesh");
    cout << s1 << endl;
    s1.replace(6, 0, "World ");
    cout << s1 << endl;
    s1.insert(11, ",");
    cout << s1 << endl;
    return 0;
}