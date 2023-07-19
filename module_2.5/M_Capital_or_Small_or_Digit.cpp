#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>> a;
    if(a>= '0' && a<='9'){
        cout<<"IS DIGIT";
    }
    else{
        cout<<"ALPHA"<<endl;
        if(a>='a' && a<='z'){
            cout<<"IS SMALL";
        }
        else{
            cout<<"IS CAPITAL";
        }
    }
    return 0;
}