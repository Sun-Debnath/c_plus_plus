#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        // cin >> s;
        getline(cin, s);
        // cin.ignore();
        int f=0,l=0;
        for(int i=0,j=s.size()-1;i<3;i++,j--){
            f=f+(s[i]-'0');
            l=l+(s[j]-'0');
        }
        (f==l)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}