#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

const int mod=1e9+7;

using namespace std;

long long n, k;

long long process(long long n, long long k) {
	if(k==1) {
		return 1;
	}
	if(k==pow(2,n)) {
		return n+1;
	}
	if(k<=pow(2,n)) {
		return process(n-1,k);
	}
	return process(n-1,k-pow(2,n));
}

void loading() {
	cin >> n >> k;
	cout << process(n-1,k) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

