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
 
vi a,p;
int n,tot;
 
bool ok(int mid){
       int s=0;
       for(int i=0;i<n;i++)if(p[i+1]>mid||tot-p[i]>mid)s+=a[i];
       return s<=mid;
}
 
int binarySearch(){
       int l=*max_element(all(a)),r=tot,ans=tot;
       while(l<=r){
              int mid=(l+r)/2;
              if(ok(mid))ans=mid,r=mid-1;
              else l=mid+1;
       }
       return ans;
}
 
void solve(){
       cin>>n;
       a.resize(n);
       p.assign(n+1,0);
       read(a,n);
       for(int i=0;i<n;i++)p[i+1]=p[i]+a[i];
       tot=p[n];
       cout<<binarySearch()<<endl;
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