#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, x;
	cin >> n;
	int a[n+1];
	int mark;
	for(int i=0;i<n+1;i++) {
		cin >> a[i];
	}
	int temp=a[0];
	sort(a,a+n+1);
	for(int i=0;i<n+1;i++) {
		if(a[i]==temp) {
			mark=i;
		}
	}
	if(mark==0) {
		cout << -1 << endl;
	}
	else {
		cout << mark << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

