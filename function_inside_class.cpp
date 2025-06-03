#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math_marks;
    int eng_marks;

    Student(string name, int roll, int math_marks, int eng_marks)
    {
        this->name = name;
        this->roll = roll;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }

    void total()
    {
        cout << "Total marks of " << name << ": " << math_marks + eng_marks << endl;
    }
};

int main()
{
    Student rakib("Rakib", 11, 55, 67);
    Student sakib("Sakib", 11, 75, 77);

    rakib.total();
    sakib.total();

    return 0;
}