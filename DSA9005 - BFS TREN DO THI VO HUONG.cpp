#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int v, e, u, x, y;
		cin >> v >> e >> u;
		vector<int> a[v+1], check(v+1,0);
		for(int i=0;i<e;i++) {
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1;i<=v;i++) {
			sort(a[i].begin(), a[i].end());
		}
		queue<int> q;
		q.push(u);
		check[u]=1;
		while(!q.empty()) {
			u=q.front();
			q.pop();
			cout << u << " ";
			for(int i=0;i<a[u].size();i++) {
				int v=a[u][i];
				if(check[v]!=1) {
					q.push(v);
					check[v]=1;
				}
			}
		}
		cout << endl;
	}
}

