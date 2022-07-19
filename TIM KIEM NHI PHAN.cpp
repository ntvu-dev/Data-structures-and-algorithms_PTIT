#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, k;
	cin >> n >> k;
	int a[n];
	int OK=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		if(a[i]==k) {
			cout << i+1 << endl;
			OK=1;
		}
	}
	if(OK==0) {
		cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

