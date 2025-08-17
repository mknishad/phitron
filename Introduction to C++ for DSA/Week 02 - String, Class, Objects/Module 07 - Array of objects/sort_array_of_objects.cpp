#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    int marks;
};

bool cmp(Student s1, Student s2)
{
    return (s1.marks == s2.marks) ? s1.roll < s2.roll : s1.marks > s2.marks;
}

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

    sort(arr, arr + n, cmp);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].roll << " " << arr[i].name << " " << arr[i].marks << endl;
    }

    return 0;
}