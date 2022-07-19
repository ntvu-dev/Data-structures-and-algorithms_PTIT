#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, a[1001];

void import() {
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void loading() {
	int count=0, k;
	for(int i=0;i<n-1;i++) {
		k=i;
		for(int j=i+1;j<n;j++) {
			if(a[j]<a[k]) k=j;
		}
		if(k!=i) count++;
		swap(a[k],a[i]);
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		import();
		loading();
	}
}

