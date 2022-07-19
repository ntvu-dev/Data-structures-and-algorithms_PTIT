#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
/* Danh sach canh
10 11 
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
5 8
6 7
6 8
*/

int v, e;
vector<int> a[1001];
bool check[1001];

void imp() {
	cin >> v >> e;
	for(int i=0;i<v;i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(check, false, sizeof(check));
}

void BFS(int u) {
	queue<int> q;
	q.push(u);
	check[u]=true;
	while(!q.empty()) {
		int t=q.front();
		q.pop();
		cout << t << " ";
		for(int i=0;i<a[t].size();i++) {
			int v=a[t][i];
			if(check[v]==false) {
				q.push(v);
				check[v]=true;
			}
		}
	}
}

int main() {
	imp();
	BFS(1);
}

