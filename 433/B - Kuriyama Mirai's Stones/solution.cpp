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
    vll a(n+1),b(n+1),p(n+1),q(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin()+1,b.end());
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+a[i];
        q[i]=q[i-1]+b[i];
    }
    int m;
    cin>>m;
    while(m--){
        int ty, l, r;
        cin>>ty>>l>>r;
        if(ty==1) cout<<p[r]-p[l-1];
        else cout<<q[r]-q[l-1];
        nl;
    }
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