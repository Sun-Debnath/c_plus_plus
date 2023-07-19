#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string space="";
    while(ss >> word){
        // reverse(word.begin(), word.end());
        cout<<space;
        for(int i=0,j=word.size()-1;i<word.size(); i++,j--){
            cout << word[j];
        }
        space = " ";
        
    }
    return 0;
}