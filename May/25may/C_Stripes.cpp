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
    int arr[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }
    string last;
    for(int i=8-1;i>=0;i--){
        for(int j=8-1;j>=0;j--){
            if(arr[i][j]=='R'){
                last="R";
                break;
            }else if(arr[i][j]=='B'){
                last="B";
                break;
            }
        }
    }
    cout<<last<<endl;
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