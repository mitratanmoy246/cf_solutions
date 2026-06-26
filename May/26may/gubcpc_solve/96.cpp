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
    int a,b;
    cin>>a>>b;
    bool ot=true;
    while(a>0 && b>0){
        if(ot){
            if(b%2==0)b/=2;
            else b--;
            if(b==0){
                cout<<"Optimus Prime\n";
                return;
            }
            else{
                if(a%2==0) a/=2;
                else a--;
                if(a==0){
                    cout<<"Megatron\n";
                    return;
                }
            }
        }
    }
    if(a) cout<<"Optimus Prime\n";
    else cout<<"Megatron\n";
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