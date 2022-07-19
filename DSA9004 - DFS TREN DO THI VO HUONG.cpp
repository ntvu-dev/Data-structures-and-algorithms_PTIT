#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

/* Duyet do thi bang DFS duoc bieu dien bang Danh sach canh */

int main() {
	int t;
	cin >> t;
	while(t--) {
		int v, e, u, x, y;
		cin >> v >> e >> u;
		vector<bool> check(v+1,true);
		vector<vector<int> > a(v+1);
		while(e--) {
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1;i<=v;i++) {
			sort(a[i].begin(), a[i].end());
		}
		stack<int> st;
		st.push(u);
		check[u]=false;
		cout << u << " ";
		while(!st.empty()) {
			u=st.top();
			st.pop();
			for(int i=0;i<a[u].size();i++) {
				int v=a[u][i];
				if(check[v]) {
					cout << v << " ";
					check[v]=false;
					st.push(u);
					st.push(v);
					break;
				}
			}
		}
		cout << endl;
	}
}

