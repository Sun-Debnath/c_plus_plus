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
        // constructor is nothing but a fuction 
};
Student fun()
{
    char name[100]="Ere gere";
    Student s_01(01,9,'A',name);
    return s_01;
}
// object can but array can't because object sent data as variable 
// which is class's variable 
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