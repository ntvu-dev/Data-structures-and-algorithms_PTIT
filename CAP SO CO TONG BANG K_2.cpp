#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	long long k;
	cin >> n >> k;
	long long a[n];
	int count=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[j]==k-a[i]) {
				count++;
			}
		}
	}
	cout << count << endl;
}

int main() {
	int t;
	while(t--) {
		loading();
	}
}

