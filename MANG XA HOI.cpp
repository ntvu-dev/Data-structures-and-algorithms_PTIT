#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y, ok = 1;
        cin >> n >> m;
        vector<vector<int> > a(n + 1);
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            for (int x: a) {
                if (a[i].size() != a[x].size()) {
                    ok = 0;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (!ok)
                break;
        }
        if (ok)
            cout << "YES" << endl;
    }
}
