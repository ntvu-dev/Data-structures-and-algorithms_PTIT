#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	int count=0;
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if((a[i]+a[j])==k) {
				count++;
			}
		}
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

