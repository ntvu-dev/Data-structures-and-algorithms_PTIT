#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

/* Danh sach canh 
10 8 
1 2
2 3
2 4
3 6
3 7
5 8
6 7
8 9
*/

int v, e, s, t;
vector<int> a[1001];
bool check[1001];
int parent[1001];

void imp() {
	cin >> v >> e;
	while(e--) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(check, false, sizeof(check));
}

void DFS(int u) {
	stack<int> st;
	st.push(u);
	check[u]=true;
	while(!st.empty()) {
		int u=st.top();
		st.pop();
		for(int i=0;i<a[u].size();i++) {
			int t=a[u][i];
			if(check[t]==false) {
				parent[t]=u;
				st.push(t);
				st.pop();
				check[t]=true;
				st.push(u);
				st.push(t);
				break;
			}
		}
	}
}

void BFS(int u) {
	queue<int> q;
	q.push(u);
	check[u]=true;
	while(!q.empty()) {
		int v=q.front();
		q.pop();
		for(int i=0;i<a[v].size();i++) {
			int t=a[v][i];
			if(check[t]==false) {
				q.push(t);
				check[t]=true;
				parent[t]=v;
			}
		}
	}
}

void path(int s, int t) {
	memset(parent, 0, sizeof(parent));
	BFS(s);
	if(check[t]==false) {
		cout << "Khong co duong di" << endl;
	}
	else {
		//Truy vet duong di 
		vector<int> path;
		while(t!=s) {
			path.push_back(t);
			t=parent[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for(int i=0;i<path.size();i++) {
			cout << path[i] << " ";
		}
	}
}

int main() {
	imp();
	cin >> s >> t;
	path(s,t);
	return 0;
}

