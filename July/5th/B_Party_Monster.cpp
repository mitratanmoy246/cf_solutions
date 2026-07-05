/*
 * Author      : Tanmoy Mitra
 * Codeforces  : mitratanmoy246
 * CodeChef    : band_deed_94
 * Language    : GNU C++23
 * Version     : 1.3
 */

#include <bits/stdc++.h>
using namespace std;

// Types
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// Macros
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(a) ((int)(a).size())

// Loop Macros
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define repn(i, n) for(int i = 0; i < (n); ++i)
#define rev(i, a, b) for(int i = (a); i >= (b); --i)
#define each(x, a) for(auto &x : a)

// I/O Helpers
#define read(a, n) do { for(int i=0; i<(n); ++i) cin>>a[i]; } while(0)
#define printv(a) for(auto &x : a) cout<<x<<" "; cout<<"\n";
#define nl cout<<'\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

void solve() {
    // Problem logic here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counta=0,countb=0;
    for(int i=0;i<n;i++){
        if(s[i]==')') counta++;
        else countb++;
    }
    if(counta==countb) yes;
    else no;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t;
    while(t--) solve();
    return 0;
}