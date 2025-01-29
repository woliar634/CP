#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for(int c=1;c<n;c++){
        for(int a=1;a<c;a++){
            int b=n-a-c;
            if( b>0 && a >= b && pow(a,2)+pow(b,2)==pow(c,2)){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}