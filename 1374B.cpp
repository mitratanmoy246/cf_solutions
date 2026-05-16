#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x,t;
        t=0;
        cin>>x;
        while(x!=1){
            if(x%6==0){
                x/=6;
                t++;
            }else if(x%3==0){
                x*=2;
                t++;
            }
            else{
                t=-1;
                break;
            }
        }
        cout<<t<<endl;
    }
}