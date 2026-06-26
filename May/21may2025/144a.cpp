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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;
    int mx=*max_element(all(v));
    int mn=*min_element(all(v));
    int count=0;
    int mxpos,mnpos;

    for(int i=0;i<n;i++){
        if(v[i]==mx){
            mxpos=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==mn){
            mnpos=i;
        }
    }
    if(v[0]==mx && v[n-1]==mn) cout<<0<<endl;
    else{
        int ans=mxpos+(n-1-mnpos);
        if(mxpos>mnpos) ans--;
        cout<<ans<<endl;
    }
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