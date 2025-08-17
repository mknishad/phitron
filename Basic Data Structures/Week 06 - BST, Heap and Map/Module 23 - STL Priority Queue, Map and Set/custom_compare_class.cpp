#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student s1, Student s2)
    {
        return s1.marks < s2.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student s(name, roll, marks);
        pq.push(s);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    
    return 0;
}