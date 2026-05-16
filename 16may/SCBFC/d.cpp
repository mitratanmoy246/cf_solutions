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
#define per(i, a, b) for(int i = a; i >= b; i--)
 
// --- SHORTCUTS ---
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    int ans = 0;
    rep(i, 1, n) {
        if (a[i] != a[i - 1]) ans++;
    }
    cout << ans << '\n';
}
 
int main() {
    fastio;
 
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}