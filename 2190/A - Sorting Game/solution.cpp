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
    string s;
    cin>>s;
    string sor=s;
    sort(all(sor));
    if(s==sor){
        cout<<"Bob";nl;
        return;
    }
    vi v;
    for(int i=0;i<n;i++){
        if(s[i]!=sor[i])
            v.pb(i+1);
    }
    cout<<"Alice";nl;
    cout<<v.size();nl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i+1<v.size())
            cout<<" ";
    }
    nl;
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