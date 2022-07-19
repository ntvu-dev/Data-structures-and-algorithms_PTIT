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
	int count=0;
	for(int i=0;i<n;i++) {
		if(a[i]==0) {
			count++;
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

