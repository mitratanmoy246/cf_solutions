#include <bits/stdc++.h>
using namespace std;
 
// Types
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
 
// Constants
constexpr int MOD = 1000000007;
constexpr ll INF = 1000000000000000000LL;
 
// Macros
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
 
// I/O
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define print(v) for(auto x:v) cout<<x<<' '; cout<<'
'
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define nl cout<<'
'
 
ll n,k;
vll a;
 
bool check(ll mid){
    ll ops=0;
    for(int i=n/2;i<n;i++){
        if(mid>a[i])ops+=mid-a[i];
        if(ops>k)return false;
    }
    return ops<=k;
}
 
ll last_true(ll l,ll r){
    ll ans=l;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return ans;
}
 
void solve(){
    cin>>n>>k;
    a.resize(n);
    read(a,n);
    sort(all(a));
    cout<<last_true(1,INF);nl;
}
 
signed main(){
    fast;
 
    int test_case=1;
    // cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}