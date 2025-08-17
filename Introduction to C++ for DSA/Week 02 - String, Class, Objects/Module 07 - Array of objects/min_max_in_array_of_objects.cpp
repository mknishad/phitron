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

    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn.marks)
        {
            mn = arr[i];
        }
    }

    cout << "Minimum:" << endl;
    cout << mn.roll << " " << mn.name << " " << mn.marks << endl;

    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks > mx.marks)
        {
            mx = arr[i];
        }
    }

    cout << endl << "Maximum:" << endl;
    cout << mx.roll << " " << mx.name << " " << mx.marks << endl;

    return 0;
}