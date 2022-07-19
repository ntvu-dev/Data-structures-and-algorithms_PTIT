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
	int min=1e9+7;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(abs(a[i]+a[j]) < abs(min)) {
				min = a[i]+a[j];
			}
		}
	}
	cout << min << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

