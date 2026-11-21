#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define double long double
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
 
constexpr int MOD = 1000000007;
constexpr ll INF = 1000000000000000000LL;
 
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
 
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define print(v) for(auto x:v) cout<<x<<' '; cout<<'
'
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define endl '
'
 
void solve(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        int mx=0;
        for(int j=0;j<=i;j++){
            int a= i-j;
            int k= min(a,j+1);
            int d= k*(1+j)-k*(k-1)/2;
            if(a>j+1)d+=a-(j+1);
            mx=max(mx,d);
        }
        if(mx>=x){
            cout<<i<<endl;
            return;
        }
    }
}
 
signed main(){
    fast;
 
    int test_case=1;
    cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}