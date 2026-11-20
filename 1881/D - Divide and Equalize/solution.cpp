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
#define print(v) for(auto x:v) cout<<x<<' '; cout<<"
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define nl cout<<"
"
 
// Number Theory
bool is_prime(ll n){if(n<2) return false; if(n==2||n==3) return true; if(n%2==0||n%3==0) return false; for(ll i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) return false; return true;}
 
// Binary Search on Answer
bool check(ll mid){return true;}
// First True (Minimum Valid Answer)
ll first_true(ll l,ll r){ll ans=r; while(l<=r){ll mid=l+(r-l)/2; if(check(mid)) ans=mid,r=mid-1; else l=mid+1;} return ans;}
// Last True (Maximum Valid Answer)
ll last_true(ll l,ll r){ll ans=l; while(l<=r){ll mid=l+(r-l)/2; if(check(mid)) ans=mid,l=mid+1; else r=mid-1;} return ans;}
 
void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=2;j*j<=x;j++){
            while(x%j==0){
                mp[j]++;
                x/=j;
            }
        }
        if(x>1)mp[x]++;
    }
    for(auto x:mp){
        if(x.second%n!=0){
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
";
}
 
signed main(){
    fast;
    int test_case=1;
    cin>>test_case;
    for(int i=1;i<=test_case;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}