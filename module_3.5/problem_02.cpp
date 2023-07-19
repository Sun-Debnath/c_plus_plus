#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    char country[20];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 07;
    char cn[20]="India";
    strcpy(dhoni->country,cn);

    Cricketer *kholi = new Cricketer;
    *kholi = *dhoni;
     
    delete dhoni;
     
    cout<<kholi->jersey_no<<endl;
    cout<<kholi->country;
    return 0;
}