#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n-1;j++) {
			if(abs(x-a[j+1]) < abs(x-a[j])) {
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++) {
		cout << a[i] << " ";
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

