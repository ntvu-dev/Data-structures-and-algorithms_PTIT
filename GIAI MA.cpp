#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	string s;
	cin >> s;
	int a[45], n=s.length();
	if(s[0]=='0') {
		cout << 0 << endl;
		return;
	}
	s=' '+s;
	memset(a,0,sizeof(a));
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++) {
		if(s[i]>'0') {
			a[i]=a[i-1];
		}
		if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<'7')) {
			a[i]+=a[i-2];
		}
	}
	cout << a[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

