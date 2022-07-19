#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	long long n, m;
	cin >> n >> m;
	long long a[n], b[m];
	for(long long i=0;i<n;i++) {
		cin >> a[i];
	}
	for(long long j=0;j<m;j++) {
		cin >> b[j];
	}
	sort(a,a+n);
	sort(b,b+m);
	long long x=a[n-1], y=b[0];
	cout << x*y << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

