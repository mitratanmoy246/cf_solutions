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
    int s[4];
    rep_n(i,4){
        cin>>s[i];
    }
    int w1,w2;
    if(s[0]>s[1]){
        w1=s[0];
    }else{
        w1=s[1];
    }

    if(s[2]>s[3]){
        w2=s[2];
    }else w2=s[3];


    for(int i=0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
            if(s[j]>s[j+1]){
                int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    if((w1==s[2] && w2==s[3])||(w2==s[2] && w1==s[3])) cout<<"YES\n";
    else cout<<"NO\n";

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