#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

const int moad=1e9+7;

int n;

void loading() {
	cin >> n;
	int a[n];
	long long x=0, y=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++) {
		if(i%2==0) {
			x=x*10+a[i];
		}
		else {
			y=y*10+a[i];
		}
	}
	cout << x+y << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

