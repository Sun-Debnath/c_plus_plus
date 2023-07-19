#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;

};
int main()
{
    Student s[3];

    for(int i=0; i<3; i++){
        getline(cin, s[i].name);
        cin>>s[i].roll>>s[i].marks;
        // cin.ignore();
        getchar();
    }
    Student mx;
    mx.marks = INT_MIN;
    for(int i=0; i<3; i++){
        if(s[i].marks > mx.marks){
            mx = s[i];
        }
    }
    
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    
    Student mn;
    mn.marks = INT_MAX;
    for(int i=0; i<3; i++){
        if(s[i].marks < mn.marks){
            mn = s[i];
        }
    }
    
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    
    return 0;
}