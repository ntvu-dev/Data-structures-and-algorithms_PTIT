#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n;
long long k, a[5001];

void import() {
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
}

void loading() {
	long long s=0;
	sort(a,a+n);
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			int x=lower_bound(a+j+1, a+n, k-a[i]-a[j])-a;
			s+=x-j-1;
		}
	}
	cout << s << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		import();
		loading();
	}
}

