#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t_cases, n_size;
    
    cin >> t_cases;
    
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < t_cases; i++) {
        cin >> n_size;

        for (int j = 1; j <= n_size; j++) {
            if (j % 2 == 0) even.push_back(j);
            else odd.push_back(j);
        }

        for (int k = 0; k < even.size(); k++) {
            cout << even[k] << " ";
        }

        for (int k = 0; k < odd.size(); k++) {
            cout << odd[k] << " ";
        }

        cout << endl;
        
        even.clear();
        odd.clear();
    }

    return 0;
}