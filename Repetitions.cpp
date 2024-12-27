#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    string s; cin >> s;
    int n = s.size();
    int cnt = 1;
    int ans = 0;
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
        else{
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    ans = max(ans,cnt);
    cout << ans;
}