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
 
void solve(){
    string s;
    cin>>s;
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll r;
    cin>>r;
    ll cb=0,cs=0,cc=0;
    for(char x:s){
        if(x=='B') cb++;
        else if(x=='S') cs++;
        else cc++;
    }
    ll l=0,h=1e13,ans=0;
    while(l<=h){
        ll m=(l+h)/2;
        ll b=max(0LL,cb*m-nb);
        ll ss=max(0LL,cs*m-ns);
        ll c=max(0LL,cc*m-nc);
        ll cost=b*pb+ss*ps+c*pc;
        if(cost<=r){
            ans=m;
            l=m+1;
        }
        else h=m-1;
    }
    cout<<ans;nl;
}
 
int main(){
    fast;
 
    int test_case=1;
    // cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}