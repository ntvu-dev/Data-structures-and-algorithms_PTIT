#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

void loading() {
	int v, e, x, y;
	cin >> v >> e;
	vector<vector<int> > g(v+1);
	while(e--) {
		cin >> x >> y;
		g[x].push_back(y);
	}
	for(int i=1;i<=v;i++) {
		cout << i << ": ";
		for(int j=0;j<g[i].size();j++) cout << g[i][j] << " ";
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}


