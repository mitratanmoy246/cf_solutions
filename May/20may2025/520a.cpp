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
    string s;
    int n;
    cin>>n;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    int freq[256]={0};
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]]++;
    }
    int flag=1;
    for(int i=97;i<=122;i++){
        if(freq[i]>=1) flag=1;
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES";
    else cout<<"NO";
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