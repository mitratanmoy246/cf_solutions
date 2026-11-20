#include <bits/stdc++.h>
using namespace std;
 
// Types
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
 
// Constants
constexpr int MOD = 1000000007;
constexpr ll INF = 1000000000000000000LL;
 
// Macros
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
 
// I/O
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define print(v) for(auto x:v) cout<<x<<' '; cout<<"
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define nl cout<<"
"
 
void solve(){
    int n;
    cin>>n;
    vi a(n),b(n);
    bool ha=false,hb=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) ha=true;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0) hb=true;
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]==1&&b[i]==0) x++;
        if(a[i]==0&&b[i]==1) y++;
    }
    if(x==0&&y==0) cout<<0<<"
";
    else if(x%2) cout<<1<<"
";
    else if(x>0) cout<<2<<"
";
    else{
        if(ha&&hb) cout<<2<<"
";
        else cout<<-1<<"
";
    }
}
 
int main(){
    fast;
 
    int test_case=1;
     cin>>test_case;
 
    while(test_case--){
        solve();
    }
 
    return 0;
}