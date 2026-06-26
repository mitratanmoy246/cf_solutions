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
    vector<int> x;
    int n;
    cin>>n;
    int p;
    cin>>p;
    while(p--){
        int m;
        cin>>m;
        x.push_back(m);
    }
    int q;
    cin>>q;
    while(q--){
        int y;
        cin>>y;
        x.push_back(y);
    }
    sort(all(x));
    x.erase(unique(all(x)),x.end());

    if(x.size()!=n){
        cout<<"Oh, my keyboard!"<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(x[i]!=i+1){
        cout<<"Oh, my keyboard!"<<endl;
        return;
    }
}

cout<<"I become the guy."<<endl;
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