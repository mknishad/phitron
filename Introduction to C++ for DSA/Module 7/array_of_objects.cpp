#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].roll;
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].marks;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].roll << " " << arr[i].name << " " << arr[i].marks << endl;
    }

    return 0;
}