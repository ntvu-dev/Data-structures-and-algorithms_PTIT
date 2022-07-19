#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

long long const mod = 1e9 + 7;

void loading() {
	int n, k;
	cin >> n >> k;
	long long a[n+3]={0};
	a[0]=a[1]=1;
	for(int i=2;i<=n;i++) {
		for(int j=1;j<=min(i,k);j++) {
			a[i]=a[i]+a[i-j];
			a[i]=a[i]%mod;
		}
	}
	cout << a[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		loading();
	}
}
