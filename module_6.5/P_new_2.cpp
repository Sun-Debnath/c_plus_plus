#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss >> word){
        for(int i=0; i<2; i++){
            // if(word[i]=='!'||word[i]=='.'||word[i]=='?'||word[i]==','){
            //     break;
            // }
            if(i==0){
                if((word[i]>= 'a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')){
                cnt++;
                i=2;
                // cout<<"from if:"<<cnt<<endl;
                }
            }
            else{
                if((word[i]>= 'a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')){
                cnt++;
                // cout<<"from else if:"<<cnt<<endl;
                }
            }
            
            
            // cout<<word[i]<<endl;
            // cout<<cnt<<endl;
        
        }
        
        // cout<<word<<endl;
    
    }
 
    cout<<cnt;
    return 0;
}