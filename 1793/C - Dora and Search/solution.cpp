#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
 
constexpr int MOD = 1000000007;
constexpr ll INF = 1000000000000000000LL;
 
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
 
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define print(v) for(auto x:v) cout<<x<<' '; cout<<'
'
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define endl '
'
 
void solve(){
    int n;
    cin>>n;
    vll a(n);
    read(a,n);
    int l=0,r=n-1;
    ll mn=1,mx=n;
    while(l<r){
        if(a[l]==mn||a[l]==mx){
            if(a[l]==mn) mn++;
            else mx--;
            l++;
        }
        else if(a[r]==mn||a[r]==mx){
            if(a[r]==mn) mn++;
            else mx--;
 
            r--;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
 
 
signed main(){
    fast;
 
    int test_case=1;
     cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}