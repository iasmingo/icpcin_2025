#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t_testes, n_children;
    
    cin >> t_testes;

    for(int i = 0; i < t_testes; i++) {
        bool ans = true;
        
        cin >> n_children;
        
        vector<int> v(n_children);

        cin >> v[0];
        
        for(int j = 1; j < n_children; j++) {
            cin >> v[j];
            
            if(v[j] <= v[j - 1]) ans=false;
        }

        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}