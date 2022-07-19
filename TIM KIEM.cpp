#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, x;
	cin >> n >> x;
	int a[n];
	int OK=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		if(a[i]==x) OK=1;
	}
	if(OK==1) {
		cout << 1 << endl;
	}
	else {
		cout << -1 << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

