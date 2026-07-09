#include <bits/stdc++.h>
using namespace std;

// Types
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

// Constants
constexpr int MOD = 1000000007;
constexpr ll INF = 1000000000000000000LL;

// Macros
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())

// Loops
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define repn(i,n) for(int i=0;i<(n);++i)
#define rev(i,a,b) for(int i=(a);i>=(b);--i)
#define each(x,v) for(auto &x:v)

// I/O Helpers
#define read(a,n) for(int i=0;i<(n);++i) cin>>a[i]
#define printv(v) for(auto &x:v) cout<<x<<' '; cout<<'\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<'\n'

// Number Theory
bool is_prime(ll n){ if(n<2) return false; if(n==2||n==3) return true; if(n%2==0||n%3==0) return false; for(ll i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) return false; return true; }

ll n,x,y;

// Binary search on Answer
bool check(ll mid){
    if(mid<min(x,y)){
        return false;
    }
    mid-=min(x,y);
    return (mid/x)+(mid/y)>=n-1;
}
//First True(For Minimum valid)
ll first_true(ll l,ll r){ll ans=r; while(l<=r){ll mid=l+(r-l)/2; if(check(mid)){ans=mid;r=mid-1;}else l=mid+1;}return ans;}
//Last True(For Maximum valid)
ll last_true(ll l, ll r){ll ans=l; while(l<=r){ll mid=l+(r-l)/2;if(check(mid)){ans=mid;l=mid+1;}else r=mid-1;}return ans;}

void solve(){
    cin>>n>>x>>y;
    ll l=min(x,y);
    ll r= INF;
    ll m= first_true(l,r);
    cout<<m<<endl;
}

int main(){
    fastio;
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}