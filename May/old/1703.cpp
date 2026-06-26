#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
        if(s=="yes") cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}