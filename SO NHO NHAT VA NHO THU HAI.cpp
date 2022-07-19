#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	int min=0, min1=0;
	sort(a,a+n);
	int OK=0;
	for(int i=1;i<n;i++) {
		if(a[i]!=a[0]) {
			OK=1;
			break;
		} 
	}
	if(OK==1) {
		cout << a[0] << " " << a[1];
	}
	else {
		cout << -1;
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

