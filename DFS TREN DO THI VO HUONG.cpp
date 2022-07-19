#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int v, e, u, check[1001];
vector<int> a[1001];

void DFS(int u) {
	stack<int> nganxep;
	nganxep.push(u);
	cout << u << " ";
	check[u]=1;
	while(nganxep.size()) {
		int s=nganxep.top();
		nganxep.pop();
		for(int i=0;i<a[s].size();i++) {
			int t=a[s][i];
			if(check[t]==0) {
				cout << t << " ";
				check[t]=1;
				nganxep.push(s);
				nganxep.push(t);
				break;
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
	DFS(u);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

