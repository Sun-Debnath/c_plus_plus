#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        
        //constructor
        Student(int r, int c, char s, char *n)
        {
            roll = r;
            cls = c;
            section = s;
            strcpy(name, n);
        }
};
int main()
{
    //initialization
    char name[100]="Ere gere";
    Student student_01(01,9,'C',name);

    // if we don't have constructor then we have to
    // set value like this:
    // student_01.roll = 01;
    // student_01.cls = 9;
    // student_01.section = 'C';
    // char nm[] = "Ere gere";
    // strcpy(student_01.name, nm);

    // output 
    cout<<student_01.name<<endl;
    cout<<student_01.roll<<endl;
    cout<<student_01.cls<<endl;
    cout<<student_01.section<<endl;
    return 0;
}