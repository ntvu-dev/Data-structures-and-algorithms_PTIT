#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int V, E, x, y;
vector< vector<int> > a,b;

void loading() {
	a.clear();
	b.clear();
	cin >> V >> E;
	a.resize(1001);
	b.resize(1001);
	for(int i=1;i<=E;i++) {
		cin >> x >> y;
		a[x].push_back(y);
		b[y].push_back(x);
	}
	for(int i=1;i<=V;i++) {
		if(a[i].size()!=b[i].size()) {
			cout << "0\n";
			return;
		}
	}
	cout << 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

