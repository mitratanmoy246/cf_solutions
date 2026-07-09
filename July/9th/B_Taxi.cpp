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

// Binary search on Answer
bool check(ll mid){
    return true;
}
//First True(For Minimum valid)
ll first_true(ll l,ll r){ll ans=r; while(l<=r){ll mid=l+(r-l)/2; if(check(mid)){ans=mid;r=mid-1;}else l=mid+1;}return ans;}
//Last True(For Maximum valid)
ll last_true(ll l, ll r){ll ans=l; while(l<=r){ll mid=l+(r-l)/2;if(check(mid)){ans=mid;l=mid+1;}else r=mid-1;}return ans;}

void solve(){
    int n;
    cin>>n;
    int c1=0,c2=0,c3=0,c4=0;
    while(n--){
        int x;
        cin>>x;
        if(x==1)c1++;
        else if(x==2)c2++;
        else if(x==3)c3++;
        else c4++;
    }
    int ans=c4;
    ans+=c3;
    ans+=c2/2;
    c1= max(0,c1-c3);
    c2%=2;
    if(c2){
        ans++;
        c1= max(0,c1-2);
    }
    ans+=(c1+3)/4;
    cout<<ans;nl;
}

int main(){
    fastio;
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}