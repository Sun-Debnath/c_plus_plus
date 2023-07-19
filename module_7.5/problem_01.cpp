#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b)
{
    if(a.marks > b.marks) return true;
    else if(a.marks == b.marks){
        if(a.roll < b.roll) return true;
        else return false;
    }
    else return false;
}
int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++){
        cin>>s[i].name>>s[i].roll>>s[i].marks;
    }
    //using sort function
    sort(s, s+n, cmp);

    //without sort function
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(s[i].marks<s[j].marks){
    //             swap(s[i],s[j]);
    //         }
    //         else if(s[j].marks == s[i].marks){
    //             if(s[i].roll>=s[j].roll){
    //                 swap(s[i],s[j]);
    //             }
    //         }
    //     }
    // }
    for(int i=0; i<n; i++){
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    return 0;
}

// for (int step = 0; step < size - 1; step++) {
//     int min_idx = step;
//     for (int i = step + 1; i < size; i++) {

//       // To sort in descending order, change > to < in this line.
//       // Select the minimum element in each loop.
//       if (array[i] < array[min_idx])
//         min_idx = i;
//     }

//     // put min at the correct position
//     swap(&array[min_idx], &array[step]);
//   }