#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int V, E, check[1001];
vector<int> a[1001];

void DFS(int u) {
	check[u]=1;
	for(int i=0;i<a[u].size();i++) {
		int v=a[u][i];
		if(check[v]==0) DFS(v);
	}
}

void loading() {
	int res=0;
	cin >> V >> E;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=E;i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1;i<=V;i++) {
		if(check[i]==0) {
			DFS(i);
			res++;
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

