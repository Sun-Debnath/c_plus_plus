#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string x,word;
    // cin >> x;
    getline(cin, x);
    int cnt=0;
    while(ss>>word){
        if(word==x){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}