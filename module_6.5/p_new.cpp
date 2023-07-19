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
        int temp=0;
        for(int i=0; i<word.size(); i++){
            if(word[i] !='!' && word[i] !='.' && word[i] !='?' && word[i] !=','){
                temp++;
            }
         }
        //  cout<<word.size()<<endl;
        //  cout<<temp<<endl;
         if((word.size()-1) == temp || (word.size()==temp)){
            cnt++;
         }
    }

    cout<<cnt;
    return 0;
}