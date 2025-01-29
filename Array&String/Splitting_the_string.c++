#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    getline(cin,s1);
    //cout<<"the string is : "<<s1<<endl;
    getline(cin,s2);
    char c=s2[0];
    //cout<<c<<endl;
    for(int i=0;i<=s1.size();i++){
        if(s1[i]==c){
            cout<<s3<<endl;
            s3="";
        }
        else s3+=s1[i];
    }
    if(!s3.empty()){
        cout<<s3<<endl;
    }
}