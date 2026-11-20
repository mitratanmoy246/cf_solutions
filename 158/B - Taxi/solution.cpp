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
    vi a(5);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    int ans=a[4];
    ans+=a[3];
    a[1]=max(0,a[1]-a[3]);
    ans+=a[2]/2;
    if(a[2]%2){
        ans++;
        a[1]=max(0,a[1]-2);
    }
    if(a[1]>0)ans+=(a[1]+3)/4;
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