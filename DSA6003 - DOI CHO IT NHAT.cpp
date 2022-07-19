#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int n, a[1001];

void loading() {
	int count=0;
	for(int i=0;i<n;i++) {
		int k=i;
		for(int j=i+1;j<n;j++) {
			if(a[j]<a[k]) k=j;
		}
		if(k!=i) {
			count++;
			swap(a[i],a[k]);
		}
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		loading();
	}
}

