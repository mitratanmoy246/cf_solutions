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
#define print(v) for(auto x:v) cout<<x<<' '; cout<<"
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define nl cout<<"
"
 
// Number Theory
bool is_prime(ll n){if(n<2) return false; if(n==2||n==3) return true; if(n%2==0||n%3==0) return false; for(ll i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) return false; return true;}
 
// Binary Search on Answer
bool check(ll mid){return true;}
// First True (Minimum Valid Answer)
ll first_true(ll l,ll r){ll ans=r; while(l<=r){ll mid=l+(r-l)/2; if(check(mid)) ans=mid,r=mid-1; else l=mid+1;} return ans;}
// Last True (Maximum Valid Answer)
ll last_true(ll l,ll r){ll ans=l; while(l<=r){ll mid=l+(r-l)/2; if(check(mid)) ans=mid,l=mid+1; else r=mid-1;} return ans;}
 
void solve(){
    int n;
    ll x;
    cin>>n>>x;
    vll a(n);
    read(a,n);
    if(x==1){
        cout<<0<<"
";
        return;
    }
    vll mou;
    ll tmp=x;
    for(ll i=2;i*i<=tmp;i++){
        if(tmp%i==0){
            mou.pb(i);
            while(tmp%i==0)tmp/=i;
        }
    }
    if(tmp>1)mou.pb(tmp);
    ll utt=0;
    for(ll p:mou){
        ll som=0;
        for(int i=0;i<n;i++)
            if(a[i]%p==0)som+=a[i];
        utt=max(utt,som);
    }
    cout<<utt;nl;
}
 
signed main(){
    fast;
    int test_case=1;
     cin>>test_case;
    for(int i=1;i<=test_case;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}