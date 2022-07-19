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
	sort(a,a+n);
	int count=0;
	for(int i=1;i<n;i++) {
		if(a[i]!=a[i-1]) {
			count++;
		} 
	}
	cout << a[n-1]-a[0]-count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

