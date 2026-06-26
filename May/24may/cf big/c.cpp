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
    int q;
    cin>>q;
    set<ll> st;
    while(q--){
        string s;
        ll x;
        cin>>s>>x;
        if(s=="JOIN") st.insert(x);
        else if(s=="LEAVE") st.erase(x);
        else{
            if(st.count(x)>0) cout<<"FOUND"<<endl;
            else cout<<"NOT FOUND"<<endl;
        } 
    }
    if(st.empty()) cout<<"EMPTY"<<endl;
    else{
        for(auto x:st) cout<<x<<" ";
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