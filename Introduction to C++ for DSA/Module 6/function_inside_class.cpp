#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Tatal marks of " << this->name << " = " << this->math + this->english << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 11, 88, 87);
    sakib.total();
    Student rakib("Rakib Ahmed", 22, 78, 77);
    rakib.total();
    return 0;
}