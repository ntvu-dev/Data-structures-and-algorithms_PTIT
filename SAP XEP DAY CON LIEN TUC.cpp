#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	for(int i=0;i<n;i++) {
		if(a[i]!=b[i]) {
			cout << i+1 << " ";
			break;
		}
	}
	for(int=n-1;i>=0;i--) {
		if(a[i]!=b[i]) {
			cout << i+1 << " ";
			break;
		}
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

