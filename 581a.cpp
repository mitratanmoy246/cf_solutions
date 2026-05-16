#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,p;
    x=0;p=0;
    cin>>a>>b;
    while(a!=0 && b!=0){
        a--;b--;
        x++;
    }
    if(a){
        p=a/2;
    }else{
        p=b/2;
    }
    cout<<x<<" "<<p;
}