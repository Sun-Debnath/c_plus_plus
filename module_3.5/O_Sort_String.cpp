// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(int i=0; i<n; i++){
//         cout<<a[i];
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt[26] = {0};
    cin>>n;
    for(int i=0; i<n; i++){
        char a;
        cin>>a;
        int j = a -'a';
        cnt[j]++;
    }
    for(int i=0; i<26; i++){
        while(cnt[i]!=0){
            cout<<char(i+'a');
            cnt[i]--;
        }
    }
    return 0;
}