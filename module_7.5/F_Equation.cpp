#include<bits/stdc++.h>
using namespace std;
long long int fun(int x,int n)
{
    long long int ans =1;
    for(int i = 0; i < n; i++){
        ans = ans *x;
    }
    return ans;
}
int main()
{
    int x,n;
    cin>>x>>n;
    long long int sum=0;
    for(int i=2;i<=n;i+=2){
        sum =sum + fun(x,i);
        // sum=sum + pow(x*1.0,i*1.0);
    }
    cout<<sum<<endl;
    return 0;
}