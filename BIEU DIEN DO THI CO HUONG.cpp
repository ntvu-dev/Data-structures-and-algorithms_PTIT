#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int a[1000][1000], v, e;

void loading() {
	cin >> v >> e;
	memset(a,0,sizeof(a));
	for(int i=0;i<e;i++) {
		int x, y;
		cin >> x >> y;
		a[x][y]=1;
	}
	for(int i=1;i<=v;i++) {
		cout << i << ": ";
		for(int j=1;j<=v;j++) {
			if(a[i][j]==1) {
				cout << j << " ";
			}
		}
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

