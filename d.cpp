#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v; v.resize(7);

    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[0] << " " << v[1] << " " << v[6] - (v[0] + v[1]);

    return 0;
}