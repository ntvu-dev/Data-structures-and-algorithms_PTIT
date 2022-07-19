#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	long long a[n+1], b[n+1]={};
	for(int i=1;i<=n;i++) {
		cin >> a[i];
		b[i]=a[i];
	}
	b[1]=a[1];
	b[2]=a[2];
	b[3]=a[1]+a[3];
	for(int i=4;i<=n;i++) {
		b[i]=max(b[i-2],b[i-3])+a[i];
	}
	sort(b,b+n+1);
	cout << b[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

