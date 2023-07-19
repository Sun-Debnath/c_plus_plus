#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;

        Student(int r, int m, char s, int c, char *n)
        {
            roll =r;
            section = s;
            math_marks = m;
            cls = c;
            strcpy(name ,n);
        }
};
int main()
{
    char name[100]="Kamal";
    char name2[100]="Jamal";
    char name3[100]="Bamal";
    // int roll;
    // cin >> roll;
    
    Student s_01(01,80,'A',9,name);
    Student s_02(02,90,'B',10,name2);
    Student s_03(03,100,'C',11,name3);

    if(s_03.math_marks>s_02.math_marks && s_03.math_marks>s_01.math_marks){
        cout<<s_03.name;
    }
    else if(s_02.math_marks>=s_03.math_marks && s_02.math_marks>=s_01.math_marks){
        cout<<s_02.name;
    }
    else{
        cout<<s_01.name;
    }
    return 0;
}