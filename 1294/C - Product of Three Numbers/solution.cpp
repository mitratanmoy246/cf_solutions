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
    ll n;
    cin>>n;
    ll a=0,b=0,c=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            n/=i;
            break;
        }
    }
    if(a==0){
        no;
        return;
    }
    for(ll i=a+1;i*i<=n;i++){
        if(n%i==0){
            b=i;
            n/=i;
            break;
        }
    }
    if(b==0||n==a||n==b){
        no;
        return;
    }
    c=n;
    yes;
    cout<<a<<" "<<b<<" "<<c;nl;
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