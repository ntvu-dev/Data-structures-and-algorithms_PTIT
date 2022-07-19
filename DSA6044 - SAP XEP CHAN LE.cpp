#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long a[n+5];
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	for(int i=1;i<=n;i+=2) {
		if(a[i]>a[i+2]) {
			swap(a[i],a[i+2]);
		}
	}
	for(int i=2;i<=n;i+=2) {
		if(a[i]<a[i+2]) {
			swap(a[i],a[i+2]);
		}
	}
	for(int i=1;i<=n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

