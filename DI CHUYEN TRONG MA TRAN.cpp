#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, m, a[101][101];

void loading() {
	cin >> n >> m;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> a[i][j];
			if(i==0 || j==0) {
				a[i][j]=1;
			}
			else {
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	cout << a[n-1][m-1] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

