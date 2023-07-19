#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    //initialization
    Student student_01;
    student_01.roll = 01;
    student_01.cls = 9;
    student_01.section = 'C';
    char nm[] = "Ere gere";
    strcpy(student_01.name, nm);

    Student student_02;
    student_02.roll = 02;
    student_02.cls = 9;
    student_02.section = 'A';
    char nm2[] ="Abol tabol";
    strcpy(student_02.name, nm2);

    // output 
    cout<<student_01.name<<endl;
    cout<<student_01.roll<<endl;
    cout<<student_01.cls<<endl;
    cout<<student_01.section<<endl;
    return 0;
}