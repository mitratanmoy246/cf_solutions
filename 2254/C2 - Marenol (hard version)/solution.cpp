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
    string a,b;
    cin>>a>>b;
    vi ae,ao,be,bo;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2==0) ae.pb(i);
            else ao.pb(i);
        }
        if(b[i]=='1'){
            if(i%2==0) be.pb(i);
            else bo.pb(i);
        }
    }
    if(ae.size()!=be.size()||ao.size()!=bo.size()){
        cout<<-1;nl;
        return;
    }
    ll ans=0;
    for(int i=0;i<ae.size();i++)ans+=abs(ae[i]-be[i])/2;
    for(int i=0;i<ao.size();i++)ans+=abs(ao[i]-bo[i])/2;
    cout<<ans;nl;
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