#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cin >> s;
    while(s.find("EGYPT") != -1){
        s.replace(s.find("EGYPT"),5," ");
    }
    cout << s;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="SabEGYPTpeEGYPTp";
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'){
//                s.replace(i,5," ");
//         }
//     }
//     cout<<s;
//      return 0;
// }