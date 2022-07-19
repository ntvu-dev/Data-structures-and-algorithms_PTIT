#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[m+n];
	for(int i=0;i<m+n;i++) {
		cin >> a[i];
	}
	sort(a,a+m+n);
	cout << a[k-1] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

