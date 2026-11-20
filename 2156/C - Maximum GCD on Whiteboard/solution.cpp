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
    int n,k;
    cin>>n>>k;
    vi f(n+1),p(n+1);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        f[x]++;
    }
    for(int i=1;i<=n;i++)p[i]=p[i-1]+f[i];
    for(int g=n;g>=1;g--){
        int lim=min(n,4*g-1);
        int er=p[lim]-f[g];
        if(2*g<=n) er-=f[2*g];
        if(3*g<=n) er-=f[3*g];
        if(er<=k){
            cout<<g<<'
';
            return;
        }
    }
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