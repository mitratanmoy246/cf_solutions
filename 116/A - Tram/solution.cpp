#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve() {
    int n;
    cin>>n;
    int cur=0, ans=0;
    for (int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        cur-=a;
        cur+=b;
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test_case = 1;
    // cin >> test_case;
 
    for (int i = 0; i < test_case; i++) {
        solve();
    }
 
    return 0;
}