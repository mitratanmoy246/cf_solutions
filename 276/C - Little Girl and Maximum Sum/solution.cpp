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
    int n,q;
    cin>>n>>q;
    vll a(n);
    read(a,n);
    vi fr(n+2);
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        fr[l]++;
        fr[r+1]--;
    }
    for(int i=1;i<=n;i++)fr[i]+=fr[i-1];
    sort(all(a));
    sort(fr.begin()+1,fr.begin()+n+1);
    ll ans=0;
    for(int i=1;i<=n;i++)ans+=a[i-1]*fr[i];
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