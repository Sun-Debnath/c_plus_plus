#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:  //access modifier 
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    //creating a object 
    Student student_01;
    // sets value for the variable
    student_01.roll = 01;
    student_01.cls = 9;
    student_01.section = 'C';
    char nm[] = "Ere gere";
    strcpy(student_01.name, nm);

    // output 
    cout<<student_01.name<<endl;
    cout<<student_01.roll<<endl;
    cout<<student_01.cls<<endl;
    cout<<student_01.section<<endl;
    return 0;
}