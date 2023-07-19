#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        char a;
        cin>>n>>a;
        for(int i=0; i<n; i++){
            if(i==n-1){
                cout<<a;
            }
            else{
                cout<<a<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}