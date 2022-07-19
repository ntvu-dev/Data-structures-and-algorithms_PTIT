#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, v;
int a[1005], b[1005], matrix[1005][1005];

void loading() {
	cin >> n >> v;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	for(int i=1;i<=n;i++) {
		cin >> b[i];
	}
	for(int i=0;i<=v;i++) {
		matrix[0][i]=0;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=v;j++) {
			if(a[i]<=j) {
				matrix[i][j]=max(matrix[i-1][j],matrix[i-1][j-a[i]]+b[i]);
			}
			else {
				matrix[i][j]=matrix[i-1][j];
			}
		}
	}
	cout << matrix[n][v] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

