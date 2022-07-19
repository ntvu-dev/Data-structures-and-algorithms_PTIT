#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, m;
	cin >> n >> m;
	int a[n+m];
	for(int i=0;i<n+m;i++) {
		cin >> a[i];
	}
	sort(a,a+n+m);
	for(int i=0;i<n+m;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

