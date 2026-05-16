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
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    int mx=max(a,max(b,c));

    int need=(mx-a)+(mx-b)+(mx-c);

    if(n<need) cout<<"NO\n";
    else if((n-need)%3==0) cout<<"YES\n";
    else cout<<"NO\n";
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