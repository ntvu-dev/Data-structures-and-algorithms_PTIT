#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int V, E, check[1001];
int a[1001][1001];

void BFS(int u) {
	queue<int> q;
	check[u]=1;
	q.push(u);
	while(q.size()) {
		int s=q.front();
		q.pop();
		for(int t=1;t<=V;t++) {
			if(a[s][t]==1 && check[t]==0) {
				check[t]=1;
				q.push(t);
			}
		}
	}
}

void loading() {
	cin >> V >> E;
	int res=0;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=E;i++) {
		int x, y;
		cin >> x >> y;
		a[x][y]=a[y][x]=1;
	}
	for(int i=1;i<=V;i++) {
		memset(check,0,sizeof(check));
		check[i]=1;
		res=0;
		for(int j=1;j<=V;j++) {
			if(check[j]==0) {
			    BFS(j);
				res++;
			}
		}
		if(res>1) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}
