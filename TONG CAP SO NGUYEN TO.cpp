#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

bool prime(int n) {
	if(n<2) {
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0;
			break;
		}
	}
	return 1;
}

void loading() {
	int n;
	cin >> n;
	int OK=0;
	for(int i=0;i<=n/2;i++) {
		if(prime(i) && prime(n-i)) {
			cout << i << " " << n-i;
			OK=1;
			break;
		}
	}
	if(OK==0) {
		cout << -1 << endl;
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

