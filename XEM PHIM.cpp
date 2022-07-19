#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int c, n, a[101], matrix[101][25001];

int main() {
	cin >> c >> n;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	memset(matrix,0,sizeof(matrix));
	for(int i=0;i<=c;i++) {
		matrix[0][i]=0;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=c;j++) {
			if(a[i]<=j) {
				matrix[i][j]=max(matrix[i-1][j],matrix[i-1][j-a[i]]+a[i]);
			}
			else {
				matrix[i][j]=matrix[i-1][j];
			}
		}
	}
	cout << matrix[n][c] << endl;
}

