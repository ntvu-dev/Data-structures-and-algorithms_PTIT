#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

const int mod=1e9+7;

using namespace std;

int A[1005], n, k, matrix[1005][1005];

void loading() {
	for(int i=0;i<1005;i++) {
		for(int j=0;j<=i;j++) {
			if(j==0 || j==i) {
				matrix[i][j]=1;
			}
			else {
				matrix[i][j]=(matrix[i-1][j-1]+matrix[i-1][j])%mod;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	loading();
	while(t--) {
		cin >> n >> k;
		cout << matrix[n][k] << endl;
	}
}

