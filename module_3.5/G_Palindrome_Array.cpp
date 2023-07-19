#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp=1;
    
        for(int i=0, j=n-1; j>i; i++,j--){
            if(arr[j] != arr[i]){
                temp=0;
            }
        }
        (temp==1)?cout<<"YES":cout<<"NO";

    return 0;
}