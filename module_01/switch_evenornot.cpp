#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n%2)
    {
        case 1:
            cout<<"odd"<<endl;
            break;
        default:
            cout<<"even"<<endl;
    }
    return 0;
}