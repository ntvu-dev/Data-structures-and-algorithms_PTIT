#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, k;

void loading() {
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int summax=0, summin=0;
	int m=min(k,n-k);
	for(int i=0;i<m;i++) {
		summin=summin+=a[i];
	}
	for(int i=m;i<n;i++) {
		summax=summax+=a[i];
	}
	cout << summax-summin << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

