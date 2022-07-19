#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, x, a[1001];

void import() {
	cin >> n >> x;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void loading() {
	int count=0;
	for(int i=0;i<n;i++) {
		if(a[i]==x) count++;
	}
	if(count==0) cout << -1 << endl;
	else cout << count<< endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		import();
		loading();
	}
}

