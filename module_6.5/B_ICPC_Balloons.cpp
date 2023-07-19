#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n, cnt[26] = {0};
        int sum =0;
        cin >> n;
        for(int i = 0; i < n; i++){
            char a;
            cin >> a;
            
            int j = a -'A';
            cnt[j]++;
            if(cnt[j] == 1){
                sum=sum +2;
            }
            else{
                sum=sum +1;
            }
        }
        cout << sum << endl;
        
    }
    return 0;
}