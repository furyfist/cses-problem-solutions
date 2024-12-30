#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    // solution exist for 1 and 4;
    // n=4 -> 2 4 1 3
    int n; cin >> n;
    vector<int> odd,even,v;
    for(int i=1; i<=n ;i++){
        if(!(i%2)) {
            even.push_back(i);
        }
        else odd.push_back(i);
    }
    if(n==2 || n==3){
        cout << "NO SOLUTION";
    } else {
        for(auto x : even) cout << x << " ";
        for(auto x2 : odd) cout << x2 << " ";
    } 
}
