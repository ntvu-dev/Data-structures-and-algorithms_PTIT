#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, k;
string s;

vector<string> res;

void check() {
	int OK=0;
	for(int i=0;i<n-k+1;i++) {
		int count=0;
		for(int j=i;j<i+k;j++) {
			if(s[j]=='A') count++;
		}
		if(count==k) {
			OK++;
		}
	}
	if(OK==1) {
		res.push_back(s);
	}
}

void loading(int i) {
	for(char j='A';j<='B';j++) {
		s[i]=j;
		if(i==n-1) {
			check();
		}
		else loading(i+1);
	}
}

int main() {
	cin >> n >> k;
	s.resize(n);
	loading(0);
	cout << res.size() << endl;
	for(int i=0;i<res.size();i++) {
		cout << res[i] << endl;
	}
}

