#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int contA=0,contB=0;
        for(char c:s){//for(int i=0;i<s.size();i++)
            if(c=='A'){
                contA++;
            }
            else contB++;
        }
        if(contA>contB){
            cout<<'A'<<endl;
        }
        else cout<<'B'<<endl;
    }   
}