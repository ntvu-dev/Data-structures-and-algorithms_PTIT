#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, x;
	cin >> n >> x;
	long long a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		if(a[i]==x) {
			cout << i+1 << endl;
			return;
		}	
	}
	cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

