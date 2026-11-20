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
    int n;
    cin>>n;
    vi p(n+1);
    for(int i=2;i<=n;i++)cin>>p[i];
    int m;
    cin>>m;
    vector<bool> dam(n+1),has(n+1);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        dam[x]=has[x]=true;
    }
    vector<vi> v(n+1);
    for(int i=n;i>=2;i--){
        if(has[i]){
            has[p[i]]=true;
            v[p[i]].pb(i);
        }
    }
    vi ans;
    for(int u=1;u<=n;u++){
        if(dam[u]){
            for(int x:v[u])ans.pb(x);
        }
        else{
            for(int i=1;i<v[u].size();i++)ans.pb(v[u][i]);
        }
    }
    cout<<ans.size();
    for(int x:ans)cout<<" "<<x;
    nl;
}
 
int main(){
    fast;
 
    int test_case=1;
     cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}