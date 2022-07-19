#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int a[1001][1001], d[1001][1001]; //d luu so buoc di min tu start den hien tai
int dx[4]={-1,0,0,1}, dy[4]={0,-1,1,0};

pair<int, int> s, e;
int n, m;

void import() {
	cin >> n >> m >> s.first >> s.second >> e.first >> e.second;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> a[i][j];
		}
	}
	memset(d,0,sizeof(d));
}

int solve() {
	queue<pair<int, int> > q;
	q.push({s.first, s.second});
	d[s.first][s.second]=0;
	while(!q.empty()) {
		pair<int, int> top=q.front();
		q.pop();
		int i=top.first, j=top.second;
		for(int k=0;k<4;k++) {
			int i1=i+dx[k];
			int j1=j+dy[k];
			if(a[i1][j1] && i1>=0 && j1>=0 && i1<n && j1<m) {
				a[i1][j1]=0;
				if(i1==e.first && j1==e.second) {
					return d[i][j] + 1;
				}
				q.push({i1,j1});
				d[i1][j1]=d[i][j]+1;
			}
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		import();
		if(a[s.first][s.second] && a[e.first][e.second]) {
			cout << solve() << endl;
		}
		else cout << -1 << endl;
	}
}

