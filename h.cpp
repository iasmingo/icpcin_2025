#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n_size, k_window;
    
    cin >> n_size >> k_window;
    
    vector<int> v(n_size);

    for(int i = 0; i < n_size; i++) {
        cin >> v[i];
    }

    unordered_map<int, int> freq;
    set<int> s;

    // 1st window
    for (int i = 0; i < k_window; i++) {
        s.insert(v[i]);
        freq[v[i]]++;
    }

    cout << s.size() << " ";

    // Following windows
    for (int i = k_window; i < n_size; i++) {
        freq[v[i - k_window]]--;
        
        if(freq[v[i - k_window]] == 0) {
            s.erase(v[i - k_window]);
        }

        s.insert(v[i]);
        freq[v[i]]++;
        cout << s.size() << " ";
    }

    return 0;
}