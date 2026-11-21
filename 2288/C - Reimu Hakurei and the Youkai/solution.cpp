#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define double long double
using ll = long long;
using ull = unsigned long long;
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
    int n,x;
    cin>>n>>x;
    vi b(n);
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        b[i]=(v+x-1)/x;
    }
    sort(all(b));
    int ans=0;
    for(int i=0;i<n-1;i++)ans=max(ans,b[i]-i-1);
    cout<<ans<<endl;
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