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
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// --- LOGIC ---
void solve() {
    int n,x;
    cin>>n>>x;
    vll profit;
    vll a(n); vll b(n);
    rep_n(i,n){
        cin>>a[i]>>b[i];
        ll p=b[i]-a[i];
        if(p>0) profit.pb(p);
    }
    ll sum=0;
    int m=profit.size();
    sort(profit.rbegin(),profit.rend());
    rep_n(i, min(x,m)){
        sum+=profit[i];
    }
    cout<<sum<<endl;
    
}

int main() {
    fastio;

    int t = 1;
    // cin >> t; 
    
    while(t--) {
        solve();
    }
    
    return 0;
}