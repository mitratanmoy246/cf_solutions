#include<bits/stdc++.h>
using namespace std;
using ll= long long;
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n), b(m);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    
    if(n<2*m){
        cout<<"NO
";
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool p=true;
    for(int i=0;i<m;i++){
        if(a[i]>b[i]||a[n-m+i]<=b[i]){
            p=false;
            break;
        }
    }
    if(p) cout<<"YES
";
    else cout<<"NO
";
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}