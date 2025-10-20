#include <bits/stdc++.h>

#define endl '\n'
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    bool passed = false;
    int practical;

    cin >> practical;

    if (practical >= 18) {
        int theoretical;
        cin >> theoretical;

        if (practical + theoretical >= 60) passed = true;
    }

    if (passed) cout << "Passed";
    else cout << "Failed";

    return 0;
}