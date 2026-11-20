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
 
void solve() {
    int n;
    cin>>n;
    int rests=0;
    int prev=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) {
            rests++;
            prev=0;
        } 
        else if(x==1) {
            if(prev==1){
                rests++;
                prev=0;
            } else{
                prev=1;
            }
        } 
        else if(x==2) {
            if(prev==2){
                rests++;
                prev=0;
            } else {
                prev=2;
            }
        } 
        else if(x==3) {
            if(prev==1){
                prev=2; 
            }else if(prev==2){
                prev=1;
            }else{
                prev=3;
            }
        }
    }
    cout<<rests<<"
";
}
 
signed main(){
    fast;
 
    int test_case=1;
    // cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}