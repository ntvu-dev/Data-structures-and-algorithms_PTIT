#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, a[105], OK, Sum;

void recursion(int i, int k) {
	if(k==Sum/2) {
		OK=1;
		return;
	}
	if(OK==1) {
		return;
	}
	for(int j=i;j<=n;j++) {
		if(k+a[j]<=Sum/2) recursion(i+1, k+a[j] );
	}
}

void loading() {
	cin >> n;
	OK=0;
	Sum=0;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
		Sum+=a[i];
	}
	if(Sum%2==1) {
		cout << "NO" << endl;
		return;
	}
	recursion(0,1);
	if(OK==0) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

