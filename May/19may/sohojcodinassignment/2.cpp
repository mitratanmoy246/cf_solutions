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
    vi v;
    cin>>n;
    int s=0,d=0;
    int l=0,r=n-1;
    while(n--){
        int x;
        cin>>x;
        v.pb(x);
    }
    bool t=0;
    while(l<=r){
        int big;
        if(v[l]>v[r]){
            big= v[l];
            l++;
        }
        else{
            big=v[r];
            r--;
        }
        if(t==0) s+=big;
        else d+=big;
        t=(1-t);
    }
    cout<<s<<" "<<d<<endl;
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