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
 
bool is_prime(ll n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
 
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
 
void solve(){
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        ll sq= sqrt(x);
        if(sq*sq==x && is_prime(sq)) yes;
        else no;
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