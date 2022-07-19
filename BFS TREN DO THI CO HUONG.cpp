#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int v, e, u, check[1001];
vector<int> a[1001];

void BFS(int u) {
	queue<int> hangdoi;
	hangdoi.push(u);
	check[u]=1;
	while(hangdoi.empty()==0) {
		int s=hangdoi.front();
		hangdoi.pop();
		cout << s << " ";
		for(int i=0;i<a[s].size();i++) {
			int t=a[s][i];
			if(check[t]==0) {
				check[t]=1;
				hangdoi.push(t);
			}
		}
	}
}

void loading() {
	cin >> v >> e >> u;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=e;i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	BFS(u);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

