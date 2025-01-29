#include<bits/stdc++.h>
using namespace std;
int main(){
 string word;
 cin>>word;
 string output=word;
 for(int i=0;i<word.size();i++){
    int x;
    cin>>x;
    output[x-1]=word[i];
 }
 cout<<output<<endl;
}