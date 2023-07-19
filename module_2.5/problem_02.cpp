#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int *a= new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    //new array
    int *b= new int[m];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    // after coping all elements to the new array now 
    // we delete the first array
    delete[] a;
    //for increased array size we add some new elements
    for(int i=n;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}

