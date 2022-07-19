#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

//vector<int> a[101];

int main() {
	int n, v, e, a[101][101];
	cin >> n;
	for(int i=1;i<=n;i++) {
		cin >> v >> e;
		a[v][e]=a[e][v]=1;
	}
	for(int i=1;i<=n;i++) {
		for(int j=i+1;j<=n;j++) {
			if(a[i][j]==1) {
				cout << i << " " << j << endl;
			}
		}
	}
}

