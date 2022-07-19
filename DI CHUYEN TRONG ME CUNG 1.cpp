#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n;
bool a[11][11], OK;
string s;

void loading(int x, int y) {
	if(x==n && y==n) {
		cout << s << " ";
		OK=1;
		return;
	}
	if(a[x+1][y]==1) {
		s+='D';
		loading(x+1,y);
		s.erase(s.length()-1);
	}
	if(a[x][y+1]==1) {
		s+='R';
		loading(x,y+1);
		s.erase(s.length()-1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		OK=0;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				cin >> a[i][j];
			}
		}
		if(a[1][1]==0) {
			cout << -1 << endl;
			continue;
		}
		loading(1,1);
		if(OK==0) {
			cout << -1;
		}
		cout << endl;
	}
}

