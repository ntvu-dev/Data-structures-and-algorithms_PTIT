#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

/* Danh sanh canh
10 8
1 2
2 3
2 4
3 6
3 7
5 8
6 7
8 9

10 10
1 2
2 3
2 4
3 6
3 7
3 8
5 8
5 10
6 7
8 9
*/

int v, e;
vector<int> a[1001];
bool check[1001];

void imp() {
	cin >> v >> e;
	while(e--) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
}

//void DFS(int u) {
//	check[u]=true;
//	for(int i=0;i<a[u].size();i++) {
//		int v=a[u][i];
//		if(check[v]==false) {
//			DFS(v);
//		}
//	}
//}

void DFS(int u) {
	stack<int> st;
	cout << u << " ";
	st.push(u);
	check[u]=true;
	while(!st.empty()) {
		int v=st.top();
		st.pop();
		for(int i=0;i<a[v].size();i++) {
			int t=a[v][i];
			if(check[t]==false) {
				st.push(t);
				check[t]=true;
				cout << t << " ";
				st.push(v);
				st.push(t);
				break;
			}
		}	
	}
}

void TPLT() {
	memset(check, false, sizeof(check));
	int count=0;
	for(int i=1;i<=v;i++) {
		if(check[i]==false) {
			count++;
			cout << "Cac dinh thuoc thanh phan lien thong " << count << ": ";
			DFS(i);
		}
	}
}





int main() {
	imp();
	TPLT();
	return 0;
}

