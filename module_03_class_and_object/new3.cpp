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
Student fun()
{
    char name[100]="Ere gere";
    Student s_01(01,9,'A',name);
    return s_01;
}
int main()
{
   
    Student s = fun();
    
    // output 
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.cls<<endl;
    cout<<s.section<<endl;
    return 0;
}