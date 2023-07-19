#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    char s;
    cin>>s>>b;
    if(a>b){
        (s=='>')?cout<<"Right":cout<<"Wrong";
    }
    else if(a<b){
        (s=='<')?cout<<"Right":cout<<"Wrong";
    }
    else{
        (s=='=')?cout<<"Right":cout<<"Wrong";
    }
    return 0;
}