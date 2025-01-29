#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int a,b;
    cin>>a>>b;
    int shovel=0,sword=0;
    int min=(a<b)?a:b;
    int sum=(a+b)/3;
    int output=(min<sum)?min:sum;
    cout<<output<<endl;
}
 
int main()
{
   solve();   
}



