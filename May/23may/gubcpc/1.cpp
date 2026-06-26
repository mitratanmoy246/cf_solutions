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

bool compare(pair<int,string> a, pair<int,string> b){
    if(a.S==b.S) return a.F>b.F;
    return a.S>b.S;
}
bool compare2(pair<int,string> a, pair<int,string> b){
    if(a.S==b.S) return a.F<b.F;
    return a.S<b.S;
}

// --- LOGIC ---
void solve() {
    vector<pair<int,string>> v;
    v.pb({5,"apple"});
    v.pb({4,"mango"});
    v.pb({5,"grapes"});
    v.pb({7,"avocado"});
    v.pb({1,"litchi"});
    v.pb({2,"jacks"});

    sort(v.begin(),v.end(),compare);
    for(auto x:v){
        cout<<x.F<<" "<<x.S<<endl;
    }
    cout<<"---------------"<<endl;
    sort(v.begin(),v.end(),compare2);
    for(auto x:v){
        cout<<x.F<<" "<<x.S<<endl;
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