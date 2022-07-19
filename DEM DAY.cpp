#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

const int mod=123456789;

using namespace std;

long long n, k;
long long process(long long n, long long k) {
	if(k==0) {
		return 1;
	}
	if(k==1) {
		return n%mod;
	}
	long long temp=process(n,k/2);
	if(k%2==0) {
		return temp*temp%mod;
	}
	else return temp*temp%mod *n%mod;
}

void loading() {
	cin >> n;
	if(n==1) {
		cout << 1 << endl;
	}
	else {
		cout << process(2,n-1) << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

