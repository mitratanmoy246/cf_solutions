#include <bits/stdc++.h>
using namespace std;

// --- SPEED ---
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// --- DATA TYPES ---
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// --- LOOPS ---
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rep_n(i, n) for (int i = 0; i < n; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)

// --- CONVENIENCE ---
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(a) (int)a.size()
#define F first
#define S second

// --- CONSTANTS ---
const int MOD = 676767677;
const ll INF = 1e18;

// --- LOGIC ---
void solve() {
    int n;
    cin>>n;
    int arr[n];
    rep_n(i,n) cin>>arr[i];
    ll dp[n];
    rep_n(i,n) dp[i]=INF;
    rep_n(i,n){
        ll cost=1;
        rev(j,i,0){
            bool ok=1;
            rep(k,j+1,i+1){
                if(arr[k-1]>arr[k]){
                    ok=0;
                    break;
                }
            }
            if(ok){
                cost=1;
                rep(k,j,i+1){
                    cost=(cost*arr[k])%MOD;
                }
                if(j==0) dp[i]=min(dp[i],cost);
                else dp[i]=min(dp[i],dp[j-1]+cost);
            }
        }
    }
    cout<<dp[n-1]%MOD<<endl;
}

int main() {
    fastio;

    int t;
    cin >> t; 
    
    while(t--) {
        solve();
    }
    
    return 0;
}