#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t_cases; ll n;
    
    cin >> t_cases;
    
    for (int i = 0; i < t_cases; i++) {
        cin >> n;

        cout << (n * (n - 1)) / 2 << endl;
    }

    return 0;
}