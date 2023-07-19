#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
    
        //constructor
        Person(float h, int a,char *n)
        {
            height = h;
            age = a;
            strcpy(name, n);
        }
};
int main()
{
    //initialization
    char name[100]="Ere gere";
    char name2[100]="Aabol tabol";
    Person *person_01 = new Person(5.3,52,name);
    Person *person_02 = new Person(5.3,30,name2);

    (person_01->age > person_02->age)?cout<<person_01->name:cout<<person_02->name;
    return 0;
}