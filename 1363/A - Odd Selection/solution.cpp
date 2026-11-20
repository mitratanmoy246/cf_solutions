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
    int n,k;
    cin>>n>>k;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x&1) odd++;
        else even++;
    }
 
    bool ok=false;
    for(int i=1;i<=k;i+=2){
        if(i<=odd&&k-i<=even){
            ok=true;
            break;
        }
    }
    if(ok) yes;
    else no;
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