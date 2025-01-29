#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    string statement;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>statement;
        if(statement.find("++")!=string::npos){
            x++;
        }
        else if(statement.find("--")!=string::npos){
            x--;
        }
    }
    cout<<x<<endl;
return 0;
}