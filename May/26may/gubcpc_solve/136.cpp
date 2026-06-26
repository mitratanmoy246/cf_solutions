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
    ll s;
    cin>>s;
    ll m=0,h=0,d=0,mo=0,y=0;
    while(s>=60){
        s/=60;
        m++;
    }

    while(m>=60){
        m/=60;
        h++;
    }

    while(h>=24){
        h/=24;
        d++;
    }
    while(d>=30){
        d/=30;
        mo++;
    }
    while(m>=12){
        m/=12;
        y++;
    }

    cout<<y<<" years, "<<mo<<" months, "<<d<<" days, "<<h<<" hours, "<<m<<" minutes, "<<s<<" seconds"<<endl;
}

int main() {
    fastio;

    int t = 1;
    cin >> t; 
    
    while(t--) {
        solve();
    }
    
    return 0;
}