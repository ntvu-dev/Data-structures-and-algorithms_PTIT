#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

long long N, L, R;

long long dodai(long long n) {
	if(n==1 || n==0) return 1;
	long long temp=dodai(n/2);
	return 2*temp+1;
}

long long loading(long long n, long long l, long long r) {
	if(l>R || r<L) return 0;
	if(l>=L && r<=R) return n;
	long long mid=(l+r)/2;
	if(mid>=L && mid <=R) {
		return loading(n/2,1,mid-1)+loading(n/2,mid+1,r)+n%2;
	}
	else return loading(n/2,1,mid-1)+loading(n/2,mid+1, r);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> N >> L >> R;
		cout << loading(N,1,dodai(N)) << endl;
	}
}

