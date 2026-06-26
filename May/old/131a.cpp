#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool ok=true;
    for(int i=1;i<s.size();i++){

        if(s[i]>='a' && s[i]<='z'){
            ok=false;
            break;
        }
    }
    if(ok){
        for(int i=0;i<s.size();i++){

            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
            else{
                s[i]+=32;
            }
        }
    }
    cout << s;
}