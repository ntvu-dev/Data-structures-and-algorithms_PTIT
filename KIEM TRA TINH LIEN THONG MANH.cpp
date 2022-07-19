#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int V, E, check[1001];
int a[1001][1001];

void DFS(int u) {
	check[u]=1;
	for(int v=1;v<=V;v++) {
		if(a[u][v]==1 && check[v]==0) {
			DFS(v);
		}
	}
}

void loading() {
	cin >> V >> E;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=E;i++) {
		int x, y;
		cin >> x >> y;
		a[x][y]=1;
	}
	for(int i=1;i<=V;i++) {
		DFS(i);
		for(int j=1;j<=V;j++) {
			if(check[j]==0) {
				cout << "NO" << endl;
				return;
			}
		}
		memset(check,0,sizeof(check));
	}
	cout << "YES" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

