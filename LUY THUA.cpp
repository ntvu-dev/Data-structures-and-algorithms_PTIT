#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

const int mod=1e9+7;

long long n, k;

long long luythua(long long n, long long k) {
	if(k==0) {
		return 1;
	}
	if(k==1) {
		return n%mod;
	}
	long long temp=luythua(n,k/2);
	if(k%2==0) {
		return temp*temp %mod;
	}
	else {
		return temp*temp%mod *n%mod;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
	    cout << luythua(n,k) << endl;
	}
}

