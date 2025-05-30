#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int role;
    char section;
    int math_marks;
    int cls;

    Student(string name, int role, char section, int math_marks, int cls)
    {
        this->name = name;
        this->role = role;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student s1("s1", 1, 'A', 98, 10);
    Student s2("s2", 2, 'A', 97, 10);
    Student s3("s3", 3, 'A', 99, 10);

    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks) {
        cout << s1.name << " " << s1.role << " " << s1.section << " " << s1.math_marks << " " << s1.cls << endl;
    } else if (s2.math_marks >> s1.math_marks && s2.math_marks >> s3.math_marks) {
        cout << s2.name << " " << s2.role << " " << s2.section << " " << s2.math_marks << " " << s2.cls << endl;
    } else {
        cout << s3.name << " " << s3.role << " " << s3.section << " " << s3.math_marks << " " << s3.cls << endl;
    }
    
    return 0;
}