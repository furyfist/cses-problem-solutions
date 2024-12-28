#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    
    for(auto &x: v) cin >> x;

    for(int i = 1; i < n; i++) {
        if(v[i-1] > v[i]) {
            ans += (v[i-1] - v[i]);
            v[i] = v[i-1]; 
        }
    }
    
    cout << ans << endl;
    
}
